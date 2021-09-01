#ifndef COORDINATES_CLASS_H
#define COORDINATES_CLASS_H

#include"Model.h"


Vertex bodyVertices[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(128.0f, -2060.0f,  2930.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					0       7--------6
	Vertex{glm::vec3(148.0f, -2060.0f,  2930.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					1      /|       /|
	Vertex{glm::vec3(148.0f, -2060.0f,  2950.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					2     4--------5 |
	Vertex{glm::vec3(128.0f, -2060.0f,  2950.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					3     | |      | |
	Vertex{glm::vec3(128.0f, -2080.0f,  2930.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					4     | 3------|-2
	Vertex{glm::vec3(148.0f, -2080.0f,  2930.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					5     |/       |/
	Vertex{glm::vec3(148.0f, -2080.0f,  2950.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			// 					6     0--------1
	Vertex{glm::vec3(128.0f, -2080.0f,  2950.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				//					7
};

Vertex topHeadVertices[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(128.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{glm::vec3(148.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{glm::vec3(128.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},
		   
	Vertex{glm::vec3(128.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2090.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},
		   					  
	Vertex{glm::vec3(148.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2090.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},
		   					  
	Vertex{glm::vec3(148.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(128.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2090.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},
		   					  
	Vertex{glm::vec3(128.0f, -2080.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(128.0f, -2080.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2090.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex bottomHeadVertices[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(128.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{glm::vec3(148.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{glm::vec3(128.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},
								
	Vertex{glm::vec3(128.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2050.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{glm::vec3(148.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(148.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2050.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{glm::vec3(148.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(128.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2050.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{glm::vec3(128.0f, -2060.0f,  2950.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{glm::vec3(128.0f, -2060.0f,  2930.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(138.0f, -2050.0f,  2940.0f), glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

// Floor variables
glm::vec3 floorTopRightCorner1 = glm::vec3(0.0f, -2000.0f, 512.0f);
glm::vec3 floorBottomRightCorner1 = glm::vec3(0.0f, -2000.0f, 0.0f);
glm::vec3 floorBottomLeftCorner1 = glm::vec3(512.0f, -2000.0f, 0.0f);
glm::vec3 floorTopLeftCorner1 = glm::vec3(512.0f, -2000.0f, 512.0f);

// Floor coordinates (Floor texture is 512x512)
Vertex floorVertices1[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices2[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices3[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices4[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices5[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices6[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex floorVertices7[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(128.0f, -2050.0f, 2966.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(128.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(384.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(384.0f, -2050.0f, 2966.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

// Height Mapped Terrain
// Steps
Vertex stepsVerticalVertices1[]
{
	Vertex{glm::vec3(206.0f, -2000.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2010.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2010.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2000.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.0f)}
};

Vertex stepsHorizontalVertices1[]
{
	Vertex{glm::vec3(206.0f, -2010.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2010.0f, 2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2010.0f, 2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2010.0f,  2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex stepsVerticalVertices2[]
{
	Vertex{glm::vec3(206.0f, -2010.0f,  2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2020.0f, 2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2020.0f, 2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2010.0f,  2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.0f)}
};

Vertex stepsHorizontalVertices2[]
{
	Vertex{glm::vec3(206.0f, -2020.0f,  2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2020.0f, 2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2020.0f, 2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2020.0f,  2590.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex stepsVerticalVertices3[]
{
	Vertex{glm::vec3(206.0f, -2020.0f,  2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2030.0f, 2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2030.0f, 2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2020.0f,  2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.0f)}
};

Vertex stepsHorizontalVertices3[]
{
	Vertex{glm::vec3(206.0f, -2030.0f,  2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2030.0f, 2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2030.0f, 2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2030.0f,  2620.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex stepsVerticalVertices4[]
{
	Vertex{glm::vec3(206.0f, -2030.0f,  2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2040.0f, 2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2040.0f, 2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2030.0f,  2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.0f)}
};

Vertex stepsHorizontalVertices4[]
{
	Vertex{glm::vec3(206.0f, -2040.0f,  2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2040.0f, 2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2040.0f, 2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2040.0f,  2650.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

Vertex stepsVerticalVertices5[]
{
	Vertex{glm::vec3(206.0f, -2040.0f,  2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2050.0f, 2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2050.0f, 2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.75f)},
	Vertex{glm::vec3(306.0f, -2040.0f,  2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.75f, 0.0f)}
};

Vertex stepsHorizontalVertices5[]
{
	Vertex{glm::vec3(206.0f, -2050.0f,  2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(306.0f, -2050.0f,  2680.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};
// Indices for drawing floor vertices in order
GLuint floorIndices[] =
{
	0, 1, 2,
	0, 2, 3
};


// Back wall
Vertex outerWallVertices1[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

// Left side walls
Vertex outerWallVertices2[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices3[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices4[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices5[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices6[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices7[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(512.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

// Right outer wall
Vertex outerWallVertices8[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, -512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices9[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f , -2000.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f , -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f , -2050.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f , -2050.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices10[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 512.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices11[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 1024.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices12[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 1536.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices13[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 2048.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices14[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(512.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(306.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(306.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(512.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices15[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(0.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(206.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(0.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

// Outer Walls beside Steps
Vertex outerWallVertices16[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(206.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(206.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(206.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(206.0f, -2000.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};

Vertex outerWallVertices17[] =
{
	//     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(306.0f, -2000.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(306.0f, -2050.0f, 2560.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(306.0f, -2050.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(306.0f, -2000.0f, 2710.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(2.0f, 0.0f)}
};


// Pyramid coordinate variables
glm::vec3 pyramidTopRightCorner1  = glm::vec3(362.0f, -2000.0f, 512.0f);
glm::vec3 pyramidBottomRightCorner1 = glm::vec3(362.0f, -2000.0f, 362.0f);
glm::vec3 pyramidBottomLeftCorner1 = glm::vec3(512.0f, -2000.0f, 362.0f);
glm::vec3 pyramidTopLeftCorner1 = glm::vec3(512.0f, -2000.0f, 512.0f);
glm::vec3 pyramidMiddlePoint1 = glm::vec3(437.0f, -2090.0f, 437.0f);

glm::vec3 pyramidTopRightCorner2 = pyramidTopRightCorner1 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 pyramidBottomRightCorner2 = pyramidBottomRightCorner1 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 pyramidBottomLeftCorner2 = pyramidBottomLeftCorner1 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 pyramidTopLeftCorner2 = pyramidTopLeftCorner1 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 pyramidMiddlePoint2 = pyramidMiddlePoint1 + glm::vec3(-362.0f, 0.0f, 0.0f);

glm::vec3 pyramidTopRightCorner3 = pyramidTopRightCorner1 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 pyramidBottomRightCorner3 = pyramidBottomRightCorner1 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 pyramidBottomLeftCorner3 = pyramidBottomLeftCorner1 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 pyramidTopLeftCorner3 = pyramidTopLeftCorner1 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 pyramidMiddlePoint3 = pyramidMiddlePoint1 + glm::vec3(0.0f, 0.0f, 512.0f);

glm::vec3 pyramidTopRightCorner4 = pyramidTopRightCorner1 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 pyramidBottomRightCorner4 = pyramidBottomRightCorner1 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 pyramidBottomLeftCorner4 = pyramidBottomLeftCorner1 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 pyramidTopLeftCorner4 = pyramidTopLeftCorner1 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 pyramidMiddlePoint4 = pyramidMiddlePoint1 + glm::vec3(-362.0f, 0.0f, 512.0f);

glm::vec3 pyramidTopRightCorner5 = pyramidTopRightCorner1 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 pyramidBottomRightCorner5 = pyramidBottomRightCorner1 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 pyramidBottomLeftCorner5 = pyramidBottomLeftCorner1 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 pyramidTopLeftCorner5 = pyramidTopLeftCorner1 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 pyramidMiddlePoint5 = pyramidMiddlePoint1 + glm::vec3(0.0f, 0.0f, 1024.0f);

glm::vec3 pyramidTopRightCorner6 = pyramidTopRightCorner1 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 pyramidBottomRightCorner6 = pyramidBottomRightCorner1 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 pyramidBottomLeftCorner6 = pyramidBottomLeftCorner1 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 pyramidTopLeftCorner6 = pyramidTopLeftCorner1 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 pyramidMiddlePoint6 = pyramidMiddlePoint1 + glm::vec3(-362.0f, 0.0f, 1024.0f);

glm::vec3 pyramidTopRightCorner7 = pyramidTopRightCorner1 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 pyramidBottomRightCorner7 = pyramidBottomRightCorner1 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 pyramidBottomLeftCorner7 = pyramidBottomLeftCorner1 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 pyramidTopLeftCorner7 = pyramidTopLeftCorner1 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 pyramidMiddlePoint7 = pyramidMiddlePoint1 + glm::vec3(0.0f, 0.0f, 1536.0f);

glm::vec3 pyramidTopRightCorner8 = pyramidTopRightCorner1 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 pyramidBottomRightCorner8 = pyramidBottomRightCorner1 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 pyramidBottomLeftCorner8 = pyramidBottomLeftCorner1 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 pyramidTopLeftCorner8 = pyramidTopLeftCorner1 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 pyramidMiddlePoint8 = pyramidMiddlePoint1 + glm::vec3(-362.0f, 0.0f, 1536.0f);

// Pyramid Vertices coordinates
Vertex pyramidVertices1[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},
	
	Vertex{pyramidBottomLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint1, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices2[] =
{    //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint2, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices3[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint3, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices4[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint4, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices5[] =
{     //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint5, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices6[] =
{    //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, 
	Vertex{pyramidBottomRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint6, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices7[] =
{    //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint7, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

Vertex pyramidVertices8[] =
{    //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{pyramidTopRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 5.0f)},
	Vertex{pyramidBottomLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 5.0f)},
	Vertex{pyramidTopLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(5.0f, 0.0f)},

	Vertex{pyramidTopRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidBottomRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(-0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidBottomLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f, -0.8f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidBottomLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidTopLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidMiddlePoint8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.8f, 0.5f,  0.0f), glm::vec2(2.5f, 5.0f)},

	Vertex{pyramidTopLeftCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(5.0f, 0.0f)},
	Vertex{pyramidTopRightCorner8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{pyramidMiddlePoint8, glm::vec3(0.83f, 0.70f, 0.44f), glm::vec3(0.0f, 0.5f,  0.8f), glm::vec2(2.5f, 5.0f)}

};

// Indices for vertices order
GLuint pyramidIndices[] =
{
	0, 1, 2, // Bottom side
	0, 2, 3, // Bottom side
	4, 6, 5, // Left side
	7, 9, 8, // Non-facing side
	10, 12, 11, // Right side
	13, 15, 14 // Facing side
};



// Number cubes coordinates variables
// Stage 1 Cubes
glm::vec3 cube1Corner0 = glm::vec3(412.0f, -2175.0f, 562.0f);	//					0       7--------6
glm::vec3 cube1Corner1 = glm::vec3(412.0f, -2175.0f, 512.0f);	//					1      /|       /|
glm::vec3 cube1Corner2 = glm::vec3(462.0f, -2175.0f, 512.0f);	//					2     4--------5 |
glm::vec3 cube1Corner3 = glm::vec3(462.0f, -2175.0f, 562.0f);	//					3     | |      | |
glm::vec3 cube1Corner4 = glm::vec3(412.0f, -2225.0f, 562.0f);	//					4     | 3------|-2
glm::vec3 cube1Corner5 = glm::vec3(412.0f, -2225.0f, 512.0f);	//					5     |/       |/
glm::vec3 cube1Corner6 = glm::vec3(462.0f, -2225.0f, 512.0f);	// 					6     0--------1
glm::vec3 cube1Corner7 = glm::vec3(462.0f, -2225.0f, 562.0f);	//					7

glm::vec3 cube2Corner0 = cube1Corner0 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner1 = cube1Corner1 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner2 = cube1Corner2 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner3 = cube1Corner3 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner4 = cube1Corner4 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner5 = cube1Corner5 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner6 = cube1Corner6 + glm::vec3(-90.5f, 0.0f, 0.0f);	
glm::vec3 cube2Corner7 = cube1Corner7 + glm::vec3(-90.5f, 0.0f, 0.0f);

glm::vec3 cube3Corner0 = cube1Corner0 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner1 = cube1Corner1 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner2 = cube1Corner2 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner3 = cube1Corner3 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner4 = cube1Corner4 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner5 = cube1Corner5 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner6 = cube1Corner6 + glm::vec3(-181.0f, 0.0f, 0.0f);
glm::vec3 cube3Corner7 = cube1Corner7 + glm::vec3(-181.0f, 0.0f, 0.0f);

glm::vec3 cube4Corner0 = cube1Corner0 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner1 = cube1Corner1 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner2 = cube1Corner2 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner3 = cube1Corner3 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner4 = cube1Corner4 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner5 = cube1Corner5 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner6 = cube1Corner6 + glm::vec3(-271.5f, 0.0f, 0.0f);
glm::vec3 cube4Corner7 = cube1Corner7 + glm::vec3(-271.5f, 0.0f, 0.0f);

glm::vec3 cube5Corner0 = cube1Corner0 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner1 = cube1Corner1 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner2 = cube1Corner2 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner3 = cube1Corner3 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner4 = cube1Corner4 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner5 = cube1Corner5 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner6 = cube1Corner6 + glm::vec3(-362.0f, 0.0f, 0.0f);
glm::vec3 cube5Corner7 = cube1Corner7 + glm::vec3(-362.0f, 0.0f, 0.0f);

glm::vec3 cube6Corner0 = cube1Corner0 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner1 = cube1Corner1 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner2 = cube1Corner2 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner3 = cube1Corner3 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner4 = cube1Corner4 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner5 = cube1Corner5 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner6 = cube1Corner6 + glm::vec3(-100.0f, 80.0f, 0.0f);
glm::vec3 cube6Corner7 = cube1Corner7 + glm::vec3(-100.0f, 80.0f, 0.0f);

glm::vec3 cube7Corner0 = cube1Corner0 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner1 = cube1Corner1 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner2 = cube1Corner2 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner3 = cube1Corner3 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner4 = cube1Corner4 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner5 = cube1Corner5 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner6 = cube1Corner6 + glm::vec3(-262.0f, 80.0f, 0.0f);
glm::vec3 cube7Corner7 = cube1Corner7 + glm::vec3(-262.0f, 80.0f, 0.0f);

// Stage 2 Cubes
glm::vec3 cube8Corner0 = cube1Corner0 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner1 = cube1Corner1 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner2 = cube1Corner2 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner3 = cube1Corner3 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner4 = cube1Corner4 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner5 = cube1Corner5 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner6 = cube1Corner6 + glm::vec3(0.0f, 0.0f, 512.0f);
glm::vec3 cube8Corner7 = cube1Corner7 + glm::vec3(0.0f, 0.0f, 512.0f);

glm::vec3 cube9Corner0 = cube1Corner0 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner1 = cube1Corner1 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner2 = cube1Corner2 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner3 = cube1Corner3 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner4 = cube1Corner4 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner5 = cube1Corner5 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner6 = cube1Corner6 + glm::vec3(-90.5f, 0.0f, 512.0f);
glm::vec3 cube9Corner7 = cube1Corner7 + glm::vec3(-90.5f, 0.0f, 512.0f);

glm::vec3 cube10Corner0 = cube1Corner0 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner1 = cube1Corner1 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner2 = cube1Corner2 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner3 = cube1Corner3 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner4 = cube1Corner4 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner5 = cube1Corner5 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner6 = cube1Corner6 + glm::vec3(-181.0f, 0.0f, 512.0f);
glm::vec3 cube10Corner7 = cube1Corner7 + glm::vec3(-181.0f, 0.0f, 512.0f);

glm::vec3 cube11Corner0 = cube1Corner0 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner1 = cube1Corner1 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner2 = cube1Corner2 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner3 = cube1Corner3 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner4 = cube1Corner4 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner5 = cube1Corner5 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner6 = cube1Corner6 + glm::vec3(-271.5f, 0.0f, 512.0f);
glm::vec3 cube11Corner7 = cube1Corner7 + glm::vec3(-271.5f, 0.0f, 512.0f);

glm::vec3 cube12Corner0 = cube1Corner0 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner1 = cube1Corner1 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner2 = cube1Corner2 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner3 = cube1Corner3 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner4 = cube1Corner4 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner5 = cube1Corner5 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner6 = cube1Corner6 + glm::vec3(-362.0f, 0.0f, 512.0f);
glm::vec3 cube12Corner7 = cube1Corner7 + glm::vec3(-362.0f, 0.0f, 512.0f);

glm::vec3 cube13Corner0 = cube1Corner0 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner1 = cube1Corner1 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner2 = cube1Corner2 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner3 = cube1Corner3 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner4 = cube1Corner4 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner5 = cube1Corner5 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner6 = cube1Corner6 + glm::vec3(-100.0f, 80.0f, 512.0f);
glm::vec3 cube13Corner7 = cube1Corner7 + glm::vec3(-100.0f, 80.0f, 512.0f);

glm::vec3 cube14Corner0 = cube1Corner0 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner1 = cube1Corner1 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner2 = cube1Corner2 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner3 = cube1Corner3 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner4 = cube1Corner4 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner5 = cube1Corner5 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner6 = cube1Corner6 + glm::vec3(-262.0f, 80.0f, 512.0f);
glm::vec3 cube14Corner7 = cube1Corner7 + glm::vec3(-262.0f, 80.0f, 512.0f);

// Stage 3 Cubes
glm::vec3 cube15Corner0 = cube1Corner0 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner1 = cube1Corner1 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner2 = cube1Corner2 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner3 = cube1Corner3 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner4 = cube1Corner4 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner5 = cube1Corner5 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner6 = cube1Corner6 + glm::vec3(0.0f, 0.0f, 1024.0f);
glm::vec3 cube15Corner7 = cube1Corner7 + glm::vec3(0.0f, 0.0f, 1024.0f);

glm::vec3 cube16Corner0 = cube1Corner0 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner1 = cube1Corner1 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner2 = cube1Corner2 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner3 = cube1Corner3 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner4 = cube1Corner4 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner5 = cube1Corner5 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner6 = cube1Corner6 + glm::vec3(-90.5f, 0.0f, 1024.0f);
glm::vec3 cube16Corner7 = cube1Corner7 + glm::vec3(-90.5f, 0.0f, 1024.0f);

glm::vec3 cube17Corner0 = cube1Corner0 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner1 = cube1Corner1 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner2 = cube1Corner2 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner3 = cube1Corner3 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner4 = cube1Corner4 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner5 = cube1Corner5 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner6 = cube1Corner6 + glm::vec3(-181.0f, 0.0f, 1024.0f);
glm::vec3 cube17Corner7 = cube1Corner7 + glm::vec3(-181.0f, 0.0f, 1024.0f);
																  
glm::vec3 cube18Corner0 = cube1Corner0 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner1 = cube1Corner1 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner2 = cube1Corner2 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner3 = cube1Corner3 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner4 = cube1Corner4 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner5 = cube1Corner5 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner6 = cube1Corner6 + glm::vec3(-271.5f, 0.0f, 1024.0f);
glm::vec3 cube18Corner7 = cube1Corner7 + glm::vec3(-271.5f, 0.0f, 1024.0f);
																  
glm::vec3 cube19Corner0 = cube1Corner0 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner1 = cube1Corner1 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner2 = cube1Corner2 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner3 = cube1Corner3 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner4 = cube1Corner4 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner5 = cube1Corner5 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner6 = cube1Corner6 + glm::vec3(-362.0f, 0.0f, 1024.0f);
glm::vec3 cube19Corner7 = cube1Corner7 + glm::vec3(-362.0f, 0.0f, 1024.0f);

glm::vec3 cube20Corner0 = cube1Corner0 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner1 = cube1Corner1 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner2 = cube1Corner2 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner3 = cube1Corner3 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner4 = cube1Corner4 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner5 = cube1Corner5 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner6 = cube1Corner6 + glm::vec3(-100.0f, 80.0f, 1024.0f);
glm::vec3 cube20Corner7 = cube1Corner7 + glm::vec3(-100.0f, 80.0f, 1024.0f);
																   
glm::vec3 cube21Corner0 = cube1Corner0 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner1 = cube1Corner1 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner2 = cube1Corner2 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner3 = cube1Corner3 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner4 = cube1Corner4 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner5 = cube1Corner5 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner6 = cube1Corner6 + glm::vec3(-262.0f, 80.0f, 1024.0f);
glm::vec3 cube21Corner7 = cube1Corner7 + glm::vec3(-262.0f, 80.0f, 1024.0f);

// Stage 4 Cubes
glm::vec3 cube22Corner0 = cube1Corner0 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner1 = cube1Corner1 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner2 = cube1Corner2 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner3 = cube1Corner3 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner4 = cube1Corner4 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner5 = cube1Corner5 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner6 = cube1Corner6 + glm::vec3(0.0f, 0.0f, 1536.0f);
glm::vec3 cube22Corner7 = cube1Corner7 + glm::vec3(0.0f, 0.0f, 1536.0f);

glm::vec3 cube23Corner0 = cube1Corner0 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner1 = cube1Corner1 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner2 = cube1Corner2 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner3 = cube1Corner3 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner4 = cube1Corner4 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner5 = cube1Corner5 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner6 = cube1Corner6 + glm::vec3(-90.5f, 0.0f, 1536.0f);
glm::vec3 cube23Corner7 = cube1Corner7 + glm::vec3(-90.5f, 0.0f, 1536.0f);

glm::vec3 cube24Corner0 = cube1Corner0 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner1 = cube1Corner1 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner2 = cube1Corner2 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner3 = cube1Corner3 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner4 = cube1Corner4 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner5 = cube1Corner5 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner6 = cube1Corner6 + glm::vec3(-181.0f, 0.0f, 1536.0f);
glm::vec3 cube24Corner7 = cube1Corner7 + glm::vec3(-181.0f, 0.0f, 1536.0f);
																  
glm::vec3 cube25Corner0 = cube1Corner0 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner1 = cube1Corner1 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner2 = cube1Corner2 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner3 = cube1Corner3 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner4 = cube1Corner4 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner5 = cube1Corner5 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner6 = cube1Corner6 + glm::vec3(-271.5f, 0.0f, 1536.0f);
glm::vec3 cube25Corner7 = cube1Corner7 + glm::vec3(-271.5f, 0.0f, 1536.0f);
																  
glm::vec3 cube26Corner0 = cube1Corner0 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner1 = cube1Corner1 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner2 = cube1Corner2 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner3 = cube1Corner3 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner4 = cube1Corner4 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner5 = cube1Corner5 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner6 = cube1Corner6 + glm::vec3(-362.0f, 0.0f, 1536.0f);
glm::vec3 cube26Corner7 = cube1Corner7 + glm::vec3(-362.0f, 0.0f, 1536.0f);

glm::vec3 cube27Corner0 = cube1Corner0 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner1 = cube1Corner1 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner2 = cube1Corner2 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner3 = cube1Corner3 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner4 = cube1Corner4 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner5 = cube1Corner5 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner6 = cube1Corner6 + glm::vec3(-100.0f, 80.0f, 1536.0f);
glm::vec3 cube27Corner7 = cube1Corner7 + glm::vec3(-100.0f, 80.0f, 1536.0f);
																   
glm::vec3 cube28Corner0 = cube1Corner0 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner1 = cube1Corner1 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner2 = cube1Corner2 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner3 = cube1Corner3 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner4 = cube1Corner4 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner5 = cube1Corner5 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner6 = cube1Corner6 + glm::vec3(-262.0f, 80.0f, 1536.0f);
glm::vec3 cube28Corner7 = cube1Corner7 + glm::vec3(-262.0f, 80.0f, 1536.0f);


// Number cubes coordinates
// Stage 1 cubes
Vertex cubeVertices1[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube1Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					0       7--------6
	Vertex{cube1Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					1      /|       /|
	Vertex{cube1Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					2     4--------5 |
	Vertex{cube1Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					3     | |      | |
	Vertex{cube1Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					4     | 3------|-2
	Vertex{cube1Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					5     |/       |/
	Vertex{cube1Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			// 					6     0--------1
	Vertex{cube1Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				//					7
};

Vertex cubeVertices2[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube2Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			
	Vertex{cube2Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			
	Vertex{cube2Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			
	Vertex{cube2Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			
	Vertex{cube2Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			
	Vertex{cube2Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			
	Vertex{cube2Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			
	Vertex{cube2Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				
};

Vertex cubeVertices3[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube3Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube3Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube3Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube3Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube3Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube3Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube3Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube3Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices4[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube4Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube4Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube4Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube4Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube4Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube4Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube4Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube4Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices5[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube5Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube5Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube5Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube5Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube5Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube5Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube5Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube5Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices6[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube6Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube6Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube6Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube6Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube6Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube6Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube6Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube6Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices7[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube7Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube7Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube7Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube7Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube7Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube7Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube7Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube7Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

// Stage 2 cubes
Vertex cubeVertices8[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube8Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					0       7--------6
	Vertex{cube8Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					1      /|       /|
	Vertex{cube8Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					2     4--------5 |
	Vertex{cube8Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					3     | |      | |
	Vertex{cube8Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					4     | 3------|-2
	Vertex{cube8Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					5     |/       |/
	Vertex{cube8Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			// 					6     0--------1
	Vertex{cube8Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				//					7
};

Vertex cubeVertices9[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube9Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube9Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube9Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube9Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube9Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube9Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube9Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube9Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices10[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube10Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube10Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube10Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube10Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube10Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube10Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube10Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube10Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices11[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube11Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube11Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube11Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube11Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube11Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube11Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube11Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube11Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices12[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube12Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube12Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube12Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube12Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube12Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube12Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube12Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube12Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices13[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube13Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube13Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube13Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube13Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube13Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube13Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube13Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube13Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices14[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube14Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube14Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube14Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube14Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube14Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube14Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube14Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube14Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

// Stage 3 cubes
Vertex cubeVertices15[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube15Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					0       7--------6
	Vertex{cube15Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					1      /|       /|
	Vertex{cube15Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					2     4--------5 |
	Vertex{cube15Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					3     | |      | |
	Vertex{cube15Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					4     | 3------|-2
	Vertex{cube15Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					5     |/       |/
	Vertex{cube15Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			// 					6     0--------1
	Vertex{cube15Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				//					7
};

Vertex cubeVertices16[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube16Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube16Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube16Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube16Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube16Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube16Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube16Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube16Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices17[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube17Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube17Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube17Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube17Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube17Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube17Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube17Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube17Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices18[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube18Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube18Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube18Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube18Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube18Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube18Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube18Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube18Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices19[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube19Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube19Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube19Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube19Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube19Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube19Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube19Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube19Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices20[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube20Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube20Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube20Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube20Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube20Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube20Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube20Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube20Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices21[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube21Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube21Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube21Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube21Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube21Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube21Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube21Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube21Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

// Stage 4 cubes
Vertex cubeVertices22[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube22Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					0       7--------6
	Vertex{cube22Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) }, 			//					1      /|       /|
	Vertex{cube22Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					2     4--------5 |
	Vertex{cube22Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) }, 			//					3     | |      | |
	Vertex{cube22Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					4     | 3------|-2
	Vertex{cube22Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) }, 			//					5     |/       |/
	Vertex{cube22Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 			// 					6     0--------1
	Vertex{cube22Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }				//					7
};

Vertex cubeVertices23[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube23Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube23Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube23Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube23Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube23Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube23Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube23Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube23Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices24[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube24Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube24Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube24Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube24Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube24Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube24Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube24Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube24Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices25[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube25Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube25Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube25Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube25Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube25Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube25Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube25Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube25Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices26[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube26Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube26Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube26Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube26Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube26Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube26Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube26Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube26Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices27[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube27Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube27Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube27Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube27Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube27Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube27Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube27Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube27Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

Vertex cubeVertices28[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{cube28Corner0, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube28Corner1, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{cube28Corner2, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube28Corner3, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
	Vertex{cube28Corner4, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube28Corner5, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{cube28Corner6, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{cube28Corner7, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }
};

// Indices for number cubes vertices order
GLuint cubeIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};


// Number middle wall coordinates
Vertex middleWallVertices1[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(276.0f, -2000.0f, 362.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 362.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 					
	Vertex{glm::vec3(276.0f, -2000.0f, 512.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 					
	Vertex{glm::vec3(276.0f, -2110.0f, 362.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 362.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 512.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 					
	Vertex{glm::vec3(276.0f, -2110.0f, 512.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }					
};


Vertex middleWallVertices2[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(276.0f, -2000.0f, 874.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 874.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				 
	Vertex{glm::vec3(276.0f, -2000.0f, 1024.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				 
	Vertex{glm::vec3(276.0f, -2110.0f, 874.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 874.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 1024.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 				
	Vertex{glm::vec3(276.0f, -2110.0f, 1024.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }					
};


Vertex middleWallVertices3[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(276.0f, -2000.0f, 1386.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 1386.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				 
	Vertex{glm::vec3(276.0f, -2000.0f, 1536.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				 
	Vertex{glm::vec3(276.0f, -2110.0f, 1386.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 1386.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 1536.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 				
	Vertex{glm::vec3(276.0f, -2110.0f, 1536.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }					
};


Vertex middleWallVertices4[] =
{ //     COORDINATES     /				COLORS				/		NORMALS			/        TexCoords       //
	Vertex{glm::vec3(276.0f, -2000.0f, 1898.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 1898.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				 
	Vertex{glm::vec3(276.0f, -2000.0f, 2048.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) }, 				
	Vertex{glm::vec3(276.0f, -2110.0f, 1898.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 1898.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f) }, 				
	Vertex{glm::vec3(236.0f, -2110.0f, 2048.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }, 				
	Vertex{glm::vec3(276.0f, -2110.0f, 2048.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) }					
};

// Middle wall ends vertices 
Vertex middleWallEndsVertices1[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 361.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 361.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 361.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 361.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f) },
};

Vertex middleWallEndsVertices2[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 512.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 512.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 512.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 512.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices3[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 873.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 873.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 873.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 873.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices4[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 1024.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 1024.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 1024.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 1024.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices5[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 1385.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 1385.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 1385.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 1385.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices6[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 1536.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 1536.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 1536.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 1536.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices7[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 1897.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 1897.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 1897.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 1897.7f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

Vertex middleWallEndsVertices8[] =
{
	Vertex{glm::vec3(276.0f, -2000.0f, 2048.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2000.0f, 2048.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f) },
	Vertex{glm::vec3(236.0f, -2110.0f, 2048.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
	Vertex{glm::vec3(276.0f, -2110.0f, 2048.3f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f) },
};

// Sky box coordinates
float skyboxVertices[] =
{
	
	-1.0f, -1.0f,  1.0f,	// 0       7--------6
	 1.0f, -1.0f,  1.0f,	// 1      /|       /|
	 1.0f, -1.0f, -1.0f,	// 2     4--------5 |
	-1.0f, -1.0f, -1.0f,	// 3     | |      | |
	-1.0f,  1.0f,  1.0f,	// 4     | 3------|-2
	 1.0f,  1.0f,  1.0f,	// 5     |/       |/
	 1.0f,  1.0f, -1.0f,	// 6     0--------1
	-1.0f,  1.0f, -1.0f		// 7
};

// Sky box indices
unsigned int skyboxIndices[] =
{
	// Right
	1, 2, 6,
	6, 5, 1,
	// Left
	0, 4, 7,
	7, 3, 0,
	// Top
	4, 5, 6,
	6, 7, 4,
	// Bottom
	0, 3, 2,
	2, 1, 0,
	// Back
	0, 1, 5,
	5, 4, 0,
	// Front
	3, 7, 6,
	6, 2, 3
};

#endif