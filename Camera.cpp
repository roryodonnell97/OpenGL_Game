#include"Camera.h"



Camera::Camera(int width, int height, glm::vec3 position)
{
	Camera::width = width;
	Camera::height = height;
	Position = position;
}

void Camera::updateMatrix(float FOVdeg, float nearPlane, float farPlane)
{
	// Initializes matrices 
	glm::mat4 view = glm::mat4(1.0f);
	glm::mat4 projection = glm::mat4(1.0f);

	// Makes camera look in the right direction
	view = glm::lookAt(Position, Position + Orientation, Up);
	// Adds perspective to scene
	projection = glm::perspective(glm::radians(FOVdeg), (float)width / height, nearPlane, farPlane);

	cameraMatrix = projection * view;
}

void Camera::Matrix(Shader& shader, const char* uniform) {
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, uniform), 1, GL_FALSE, glm::value_ptr(cameraMatrix));
}

void Camera::Inputs(GLFWwindow* window)
{
	// Handles key inputs
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
	{
		Position += speed * Orientation;
	}
	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
	{
		Position += speed * -glm::normalize(glm::cross(Orientation, Up));
	}
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
	{
		Position += speed * -Orientation;
	}
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
	{
		Position += speed * glm::normalize(glm::cross(Orientation, Up));
	}


	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
	{
		Position += speed * Up;
	}
	if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS)
	{
		Position += speed * -Up;
	}

	if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS)
	{
		speed = 1.6f;
	}
	else if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_RELEASE)
	{
		speed = 0.8f;
	}

	// Collision Detection
	// Outer walls, floor and sky
	if (Position.y > 2050 && Position.z > -2560) 
	{
		Position.y = 2050;
	}
	if (Position.y < 2005)
	{
		Position.y = 2005;
	}
	if (Position.z < -2710 && Position.y < 2055)
	{
		Position.y = 2055;
	}
	if (Position.x < -500)
	{
		Position.x = -500;
	}
	if (Position.z < -2900)
	{
		Position.z = -2900;
	}
	if (Position.x > -12)
	{
		Position.x = -12;
	}
	if (Position.z > 500)
	{
		Position.z = 500;
	}
	if (Position.z < -2548 && Position.z > -2560 && Position.x > -206 && Position.x < 0)
	{
		Position.z = -2548;
	}
	if (Position.z < -2548 && Position.z > -2560 && Position.x < -306 && Position.x > -512)
	{
		Position.z = -2548;
	}
	if (Position.z < -2560 && Position.z > -2710 && Position.x > -216)
	{
		Position.x = -216;
	}
	if (Position.z < -2560 && Position.z > -2710 && Position.x < -296)
	{
		Position.x = -296;
	}
	if (Position.z > -2966 && Position.z < -2710 && Position.x > -128)
	{
		Position.x = -128;
	}
	if (Position.z > -2966 && Position.z < -2710 && Position.x < -384)
	{
		Position.x = -384;
	}

	// Wrong Answer Reset
	// Starting Position = -256.0f, 2030.0f, 50.0f
	if (Position.x > -232 && Position.x < -150 && Position.z < -510 && Position.z > -512)
	{
		Position.x = -256.0f;
		Position.y = 2030.0f;
		Position.z = 50.0f;
	}

	if (Position.x < -280 && Position.x > -362 && Position.z < -1020 && Position.z > -1024)
	{
		Position.x = -256.0f;
		Position.y = 2030.0f;
		Position.z = 50.0f;
	}

	if (Position.x < -280 && Position.x > -362 && Position.z < -1534 && Position.z > -1536)
	{
		Position.x = -256.0f;
		Position.y = 2030.0f;
		Position.z = 50.0f;
	}

	if (Position.x > -232 && Position.x < -150 && Position.z < -2046 && Position.z > -2048)
	{
		Position.x = -256.0f;
		Position.y = 2030.0f;
		Position.z = 50.0f;
	}

	//Pyramids
	if (Position.x < -362 && Position.x > -512 && Position.z > -362 && Position.z < -355) 
	{
		Position.z = -355;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z < -512 && Position.z > -519)
	{
		Position.z = -519;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z > -874 && Position.z < -867)
	{
		Position.z = -867;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z < -1024 && Position.z > -1031)
	{
		Position.z = -1031;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z > -1386 && Position.z < -1379)
	{
		Position.z = -1379;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z < -1536 && Position.z > -1543)
	{
		Position.z = -1543;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z > -1898 && Position.z < -1891)
	{
		Position.z = -1891;
	}
	if (Position.x < -362 && Position.x > -512 && Position.z < -2048 && Position.z > -2055)
	{
		Position.z = -2055;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z > -362 && Position.z < -355)
	{
		Position.z = -355;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z < -512 && Position.z > -519)
	{
		Position.z = -519;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z > -874 && Position.z < -867)
	{
		Position.z = -867;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z < -1024 && Position.z > -1031)
	{
		Position.z = -1031;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z > -1386 && Position.z < -1379)
	{
		Position.z = -1379;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z < -1536 && Position.z > -1543)
	{
		Position.z = -1543;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z > -1898 && Position.z < -1891)
	{
		Position.z = -1891;
	}
	if (Position.x < 0 && Position.x > -150 && Position.z < -2048 && Position.z > -2055)
	{
		Position.z = -2055;
	}

	if (Position.x < -362 && ((Position.z < -362 && Position.z > -512) || (Position.z < -874 && Position.z > -1022) || (Position.z < -1386 && Position.z > -1534) || (Position.z < -1898 && Position.z > -2048)))
	{
		Position.x = -362;
	}
	if (Position.x > -150 && ((Position.z < -362 && Position.z > -510) || (Position.z < -874 && Position.z > -1024) || (Position.z < -1386 && Position.z > -1536) || (Position.z < -1898 && Position.z > -2046)))
	{
		Position.x = -150;
	}

	// Middle Walls
	if (Position.x < -236 && Position.x > -276 && Position.z > -362 && Position.z < -355)
	{
		Position.z = -355;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z < -512 && Position.z > -519)
	{
		Position.z = -519;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z > -874 && Position.z < -867)
	{
		Position.z = -867;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z < -1024 && Position.z > -1031)
	{
		Position.z = -1031;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z > -1386 && Position.z < -1379)
	{
		Position.z = -1379;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z < -1536 && Position.z > -1543)
	{
		Position.z = -1543;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z > -1898 && Position.z < -1891)
	{
		Position.z = -1891;
	}
	if (Position.x < -236 && Position.x > -276 && Position.z < -2048 && Position.z > -2055)
	{
		Position.z = -2055;
	}

	if (Position.x < -232 && Position.x > -256 && ((Position.z < -362 && Position.z > -512) || (Position.z < -874 && Position.z > -1024) || (Position.z < -1386 && Position.z > -1536) || (Position.z < -1898 && Position.z > -2048)))
	{
		Position.x = -232;
	}
	if (Position.x > -280 && Position.x < -256 && ((Position.z < -362 && Position.z > -512) || (Position.z < -874 && Position.z > -1024) || (Position.z < -1386 && Position.z > -1536) || (Position.z < -1898 && Position.z > -2048)))
	{
		Position.x = -280;
	}


	// Height Mapped Terrain
	// Steps
	if (Position.x < -206 && Position.x > -306 && Position.z < -2560 && Position.z > -2590 && Position.y < 2030)
	{
		Position.y = 2030;
	}
	if (Position.x < -206 && Position.x > -306 && Position.z < -2590 && Position.z > -2620 && Position.y < 2040)
	{
		Position.y = 2040;
	}
	if (Position.x < -206 && Position.x > -306 && Position.z < -2620 && Position.z > -2650 && Position.y < 2050)
	{
		Position.y = 2050;
	}
	if (Position.x < -206 && Position.x > -306 && Position.z < -2650 && Position.z > -2680 && Position.y < 2060)
	{
		Position.y = 2060;
	}
	if (Position.x < -206 && Position.x > -306 && Position.z < -2680 && Position.z > -2710 && Position.y < 2070)
	{
		Position.y = 2070;
	}

	// Handles mouse inputs
	if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS)
	{
		// Hides mouse cursor
		glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);

		// Prevents camera from jumping on first click
		if (firstClick)
		{
			glfwSetCursorPos(window, (width / 2), (height / 2));
			firstClick = false;
		}

		// Coordinates of cursor
		double mouseX;
		double mouseY;
		glfwGetCursorPos(window, &mouseX, &mouseY);

		// Normalizes coordinates of  cursor to the middle of the screen
		float rotX = sensitivity * (float)(mouseY - (height / 2)) / height;
		float rotY = sensitivity * (float)(mouseX - (width / 2)) / width;

		// Calculates upcoming vertical change in the Orientation
		glm::vec3 newOrientation = glm::rotate(Orientation, glm::radians(-rotX), glm::normalize(glm::cross(Orientation, Up)));

		// Decides if next vertical Orientation is allowed
		if (abs(glm::angle(newOrientation, Up) - glm::radians(90.0f)) <= glm::radians(85.0f))
		{
			Orientation = newOrientation;
		}

		// Rotates Orientation left and right
		Orientation = glm::rotate(Orientation, glm::radians(-rotY), Up);

		// Sets mouse cursor to  middle of the screen 
		glfwSetCursorPos(window, (width / 2), (height / 2));
	}
	else if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE)
	{
		// Unhides cursor 
		glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
		// Makes sure the camera doesn't jump
		firstClick = true;
	}
}