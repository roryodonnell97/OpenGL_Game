#version 330 core

// Outputs colors in RGBA
out vec4 FragColor;

// Imports current position from  Vertex Shader
in vec3 crntPos;
// Imports normal from Vertex Shader
in vec3 Normal;
// Imports color from Vertex Shader
in vec3 color;
// Imports texture coordinates from Vertex Shader
in vec2 texCoord;



// Gets Texture Units from main
uniform sampler2D diffuse0;
uniform sampler2D specular0;
// Gets color of light from main 
uniform vec4 lightColor;
// Gets position of light from  main 
uniform vec3 lightPos;
// Gets position of camera from  main 
uniform vec3 camPos;


vec4 pointLight()
{	
	vec3 lightVec = lightPos - crntPos;

	// intensity of light
	float dist = length(lightVec);
	float a = 0.001;
	float b = 0.0002;
	float inten = 1.0f / (a * dist * dist + b * dist + 1.0f);

	// ambient lighting
	float ambient = 0.20f;

	// diffuse lighting
	vec3 normal = normalize(Normal);
	vec3 lightDirection = normalize(lightVec);
	float diffuse = max(dot(normal, lightDirection), 0.0f);

	// specular lighting
	float specularLight = 5.50f;
	vec3 viewDirection = normalize(crntPos);
	vec3 reflectionDirection = reflect(-lightDirection, normal);
	float specAmount = pow(max(dot(viewDirection, reflectionDirection), 0.0f), 16);
	float specular = specAmount * specularLight;

	return (texture(diffuse0, texCoord) * (diffuse * inten + ambient) + texture(specular0, texCoord).r * specular * inten) * lightColor;
}

vec4 direcLight()
{
	// ambient lighting
	float ambient = 0.30f;

	// diffuse lighting
	vec3 normal = normalize(Normal);
	vec3 lightDirection = normalize(vec3(0.0f, 1.0f, 1.0f));
	float diffuse = max(dot(normal, lightDirection), 0.0f);

	// specular lighting
	float specularLight = 0.20f;
	vec3 viewDirection = normalize(crntPos);
	vec3 reflectionDirection = reflect(-lightDirection, normal);
	float specAmount = pow(max(dot(viewDirection, reflectionDirection), 0.0f), 16);
	float specular = specAmount * specularLight;

	return (texture(diffuse0, texCoord) * (diffuse + ambient) + texture(specular0, texCoord).r * specular) * lightColor;
}

vec4 spotLight()
{
	// controls how big lit up area is
	float outerCone = 0.90f;
	float innerCone = 0.95f;

	// ambient lighting
	float ambient = 0.20f;

	// diffuse lighting
	vec3 normal = normalize(Normal);
	vec3 lightDirection = normalize(lightPos - crntPos);
	float diffuse = max(dot(normal, lightDirection), 0.0f);

	// specular lighting
	float specularLight = 0.50f;
	vec3 viewDirection = normalize(camPos - crntPos);
	vec3 reflectionDirection = reflect(-lightDirection, normal);
	float specAmount = pow(max(dot(viewDirection, reflectionDirection), 0.0f), 16);
	float specular = specAmount * specularLight;

	// calculates the intensity of the crntPos based on its angle to the center of the light cone
	float angle = dot(vec3(0.0f, -1.0f, 0.0f), -lightDirection);
	float inten = clamp((angle - outerCone) / (innerCone - outerCone), 0.0f, 1.0f);

	return (texture(diffuse0, texCoord) * (diffuse * inten + ambient) + texture(specular0, texCoord).r * specular * inten) * lightColor;
}

void main()
{
	// outputs final color
	FragColor = direcLight();
}