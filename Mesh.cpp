#include "Mesh.h"

Mesh::Mesh(std::vector <Vertex>& vertices, std::vector <GLuint>& indices, std::vector <Texture>& textures)
{
	Mesh::vertices = vertices;
	Mesh::indices = indices;
	Mesh::textures = textures;

	VAO.Bind();
	// Generates VBO and links it to vertices
	VBO VBO(vertices);
	// Generates EBO and links it to indices
	EBO EBO(indices);
	// Links VBO attributes to VAO
	VAO.LinkAttrib(VBO, 0, 3, GL_FLOAT, sizeof(Vertex), (void*)0);
	VAO.LinkAttrib(VBO, 1, 3, GL_FLOAT, sizeof(Vertex), (void*)(3 * sizeof(float)));
	VAO.LinkAttrib(VBO, 2, 3, GL_FLOAT, sizeof(Vertex), (void*)(6 * sizeof(float)));
	VAO.LinkAttrib(VBO, 3, 2, GL_FLOAT, sizeof(Vertex), (void*)(9 * sizeof(float)));
	// Unbind all 
	VAO.Unbind();
	VBO.Unbind();
	EBO.Unbind();
}

glm::vec3 translation = glm::vec3(0.0f, 0.0f, 0.0f);
glm::quat rotation = glm::quat(0.0f, 0.0f, 0.0f, 0.0f);
glm::vec3 scale = glm::vec3(1.0f, 1.0f, 1.0f);

// Mesh Draw function
void Mesh::Draw
(
	Shader& shader,
	Camera& camera,
	glm::mat4 matrix
)
{
	// Bind shader
	shader.Activate();
	VAO.Bind();

	// Keep track of how many of each type of textures 
	unsigned int numDiffuse = 0;
	unsigned int numSpecular = 0;

	for (unsigned int i = 0; i < textures.size(); i++)
	{
		std::string num;
		std::string type = textures[i].type;
		if (type == "diffuse")
		{
			num = std::to_string(numDiffuse++);
		}
		else if (type == "specular")
		{
			num = std::to_string(numSpecular++);
		}
		textures[i].texUnit(shader, (type + num).c_str(), i);
		textures[i].Bind();
	}
	// Camera Matrix
	glUniform3f(glGetUniformLocation(shader.ID, "camPos"), camera.Position.x, camera.Position.y, camera.Position.z);
	camera.Matrix(shader, "camMatrix");

	// Initialize matrices
	glm::mat4 trans = glm::mat4(1.0f);
	glm::mat4 rot = glm::mat4(1.0f);
	glm::mat4 sca = glm::mat4(1.0f);

	// Transform matrices
	trans = glm::translate(trans, translation);
	rot = glm::mat4_cast(rotation);
	sca = glm::scale(sca, scale);

	// Push matrices to vertex shader
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, "translation"), 1, GL_FALSE, glm::value_ptr(trans));
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, "rotation"), 1, GL_FALSE, glm::value_ptr(rot));
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, "scale"), 1, GL_FALSE, glm::value_ptr(sca));
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, "model"), 1, GL_FALSE, glm::value_ptr(matrix));

	// Draw mesh
	glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
}