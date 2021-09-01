#ifndef PLAYER_CLASS_H
#define PLAYER_CLASS_H

#include"Model.h"

class Player
{
public:
	std::vector <Vertex> vertices;
	std::vector <GLuint> indices;
	std::vector <Texture> textures;
	// Store VAO in public so it can be used in the Draw function
	VAO VAO;

	// Stores the main vectors of the camera
	glm::vec3 Position;
	glm::vec3 Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
	glm::vec3 Up = glm::vec3(0.0f, 1.0f, 0.0f);
	glm::mat4 playerMatrix = glm::mat4(1.0f);



	// Initializes the Player
	Player(std::vector <Vertex>& vertices, std::vector <GLuint>& indices, std::vector <Texture>& textures, glm::vec3 position);

	// Draws the Player
	void Draw
	(
		Shader& shader,
		Camera& camera,
		glm::mat4 matrix = glm::mat4(1.0f),
		glm::vec3 translation = glm::vec3(0.0f, 0.0f, 0.0f),
		glm::quat rotation = glm::quat(1.0f, 0.0f, 0.0f, 0.0f),
		glm::vec3 scale = glm::vec3(1.0f, 1.0f, 1.0f)
	);

	// Prevents the camera from jumping around when first clicking left click
	bool firstClick = true;

	// Stores the width and height of the window
	int width;
	int height;

	// Adjust the speed of the camera and it's sensitivity when looking around
	float speed = 0.1f;
	float sensitivity = 100.0f;

	// Camera constructor to set up initial values
	Player(glm::vec3 position);

	// Updates and exports the camera matrix to the Vertex Shader
	void updateMatrix(float FOVdeg, float nearPlane, float farPlane);
	void Matrix(Shader& shader, const char* uniform);
	// Handles camera inputs
	void Inputs(GLFWwindow* window);
};
#endif
