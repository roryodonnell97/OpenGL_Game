#include"Texture.h"

Texture::Texture(const char* image, const char* texType, GLuint slot)
{
	// Assign type of texture to texture object
	type = texType;

	// Store width, height, and number of color channels of image
	int widthImg, heightImg, numColCh;
	// Flip image
	stbi_set_flip_vertically_on_load(true);
	// Read image from  file and store it in bytes
	unsigned char* bytes = stbi_load(image, &widthImg, &heightImg, &numColCh, 0);

	// Generate OpenGL texture object
	glGenTextures(1, &ID);
	// Assign texture to a Texture Unit
	glActiveTexture(GL_TEXTURE0 + slot);
	unit = slot;
	glBindTexture(GL_TEXTURE_2D, ID);


	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);


	// Check type of color channels texture has and load
	if (numColCh == 4)
		glTexImage2D
		(
			GL_TEXTURE_2D,
			0,
			GL_RGBA,
			widthImg,
			heightImg,
			0,
			GL_RGBA,
			GL_UNSIGNED_BYTE,
			bytes
		);
	else if (numColCh == 3)
		glTexImage2D
		(
			GL_TEXTURE_2D,
			0,
			GL_RGBA,
			widthImg,
			heightImg,
			0,
			GL_RGB,
			GL_UNSIGNED_BYTE,
			bytes
		);
	else if (numColCh == 1)
		glTexImage2D
		(
			GL_TEXTURE_2D,
			0,
			GL_RGBA,
			widthImg,
			heightImg,
			0,
			GL_RED,
			GL_UNSIGNED_BYTE,
			bytes
		);
	else
		throw std::invalid_argument("Automatic Texture type recognition failed");

	// Generate MipMap
	glGenerateMipmap(GL_TEXTURE_2D);

	// Delete image data
	stbi_image_free(bytes);

	// Unbind OpenGL Texture object 
	glBindTexture(GL_TEXTURE_2D, 0);
}


void Texture::texUnit(Shader& shader, const char* uniform, GLuint unit)
{
	// Gets location of uniform
	GLuint texUni = glGetUniformLocation(shader.ID, uniform);
	// Activate Shader
	shader.Activate();
	// Sets value of  uniform
	glUniform1i(texUni, unit);
}

void Texture::Bind()
{
	glActiveTexture(GL_TEXTURE0 + unit);
	glBindTexture(GL_TEXTURE_2D, ID);
}

void Texture::Unbind()
{
	glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture::Delete()
{
	glDeleteTextures(1, &ID);
}