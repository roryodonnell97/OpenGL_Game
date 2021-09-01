#version 330 core

// Positions/Coordinates
layout (location = 0) in vec3 aPos;
// Normals
layout (location = 1) in vec3 aNormal;
// Colors
layout (location = 2) in vec3 aColor;
// Texture Coordinates
layout (location = 3) in vec2 aTex;


// Outputs current position for Fragment Shader
out vec3 crntPos;
// Outputs normal for Fragment Shader
out vec3 Normal;
// Outputs color for Fragment Shader
out vec3 color;
// Outputs texture coordinates to Fragment Shader
out vec2 texCoord;



// Imports camera matrix
uniform mat4 camMatrix;
// Imports transformation matrices
uniform mat4 model;
uniform mat4 translation;
uniform mat4 rotation;
uniform mat4 scale;


void main()
{
	// calculates current position
	crntPos = vec3(model * translation * -rotation * scale * vec4(aPos, 1.0f));
	// Assigns normal from the Vertex Data to "Normal"
	Normal = aNormal;
	// Assigns colors from the Vertex Data to "color"
	color = aColor;
	// Assigns texture coordinates from Vertex Data to "texCoord"
	texCoord = mat2(0.0, -1.0, 1.0, 0.0) * aTex;
	
	// Outputs the positions/coordinates of all vertices
	gl_Position = camMatrix * vec4(crntPos, 1.0);
}