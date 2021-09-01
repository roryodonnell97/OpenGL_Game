#include"Model.h"
#include"Coordinates.h"


// Window Width and Height Variables
const unsigned int width = 1600;
const unsigned int height = 1000;


int main()
{
	// Initialize GLFW
	glfwInit();

	// GLFW version and profile
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create  GLFWwindow object
	GLFWwindow* window = glfwCreateWindow(width, height, "Window", NULL, NULL);
	// Error check if  window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce  window into the current context
	glfwMakeContextCurrent(window);

	// Load GLAD 
	gladLoadGL();
	// Specify viewport of OpenGL in  Window
	glViewport(0, 0, width, height);



	// Load Textures
	Texture floorTextures[]
	{
		Texture("sand.png", "diffuse", 0),
		Texture("sand.png", "specular", 1),
	};

	Texture plankTextures[]
	{
		Texture("planks.png", "diffuse", 0),
		Texture("planksSpec.png", "specular", 1),
	};

	Texture pyramidTextures[]
	{
		Texture("bricks.png", "diffuse", 0),
		Texture("bricks.png", "specular", 1)
	};
	
	Texture number0Textures[]
	{
		Texture("Number0.png", "diffuse", 0)
	};

	Texture number1Textures[]
	{
		Texture("Number1.png", "diffuse", 0)
	};

	Texture number2Textures[]
	{
		Texture("Number2.png", "diffuse", 0)
	};

	Texture number3Textures[]
	{
		Texture("Number3.png", "diffuse", 0)
	};

	Texture number4Textures[]
	{
		Texture("Number4.png", "diffuse", 0)
	};

	Texture number5Textures[]
	{
		Texture("Number5.png", "diffuse", 0)
	};

	Texture number6Textures[]
	{
		Texture("Number6.png", "diffuse", 0)
	};

	Texture number7Textures[]
	{
		Texture("Number7.png", "diffuse", 0)
	};

	Texture number8Textures[]
	{
		Texture("Number8.png", "diffuse", 0)
	};

	Texture number9Textures[]
	{
		Texture("Number9.png", "diffuse", 0)
	};

	Texture plusSignTextures[]
	{
		Texture("PlusSign.png", "diffuse", 0)
	};

	Texture minusSignTextures[]
	{
		Texture("MinusSign.png", "diffuse", 0)
	};

	Texture multiplySignTextures[]
	{
		Texture("MultiplySign.png", "diffuse", 0)
	};

	Texture divideSignTextures[]
	{
		Texture("DivideSign.png", "diffuse", 0)
	};

	Texture equalsSignTextures[]
	{
		Texture("EqualsSign.png", "diffuse", 0)
	};

	Texture questionMarkTextures[]
	{
		Texture("QuestionMark.png", "diffuse", 0)
	};

	Texture middleWallTextures[]
	{
		Texture("MiddleWall.png", "diffuse", 0)
	};

	Texture outerWallTextures[]
	{
		Texture("StoneWall.png", "diffuse", 0)
	};

	Texture middleWallEndsTextures[]
	{
		Texture("brown.png", "diffuse", 0)
	};

	Texture blackTextures[]
	{
		Texture("black.png", "diffuse", 0)
	};

	Texture goldTextures[]
	{
		Texture("gold.png", "diffuse", 0)
	};

	// Default shaders
	Shader shaderProgram("default.vert", "default.frag");
	

	// Load trophy vertices, indices, and textures
	std::vector <Vertex> bodyVerts(bodyVertices, bodyVertices + sizeof(bodyVertices) / sizeof(Vertex));
	std::vector <Vertex> topHeadVerts(topHeadVertices, topHeadVertices + sizeof(topHeadVertices) / sizeof(Vertex));
	std::vector <Vertex> bottomHeadVerts(bottomHeadVertices, bottomHeadVertices + sizeof(bottomHeadVertices) / sizeof(Vertex));

	std::vector <GLuint> bodyInd(cubeIndices, cubeIndices + sizeof(cubeIndices) / sizeof(GLuint));
	std::vector <GLuint> headInd(pyramidIndices, pyramidIndices + sizeof(pyramidIndices) / sizeof(GLuint));
	
	std::vector <Texture> bodyTex(blackTextures, blackTextures + sizeof(blackTextures) / sizeof(Texture));
	std::vector <Texture> headTex(goldTextures, goldTextures + sizeof(goldTextures) / sizeof(Texture));

	// Create trophy meshes
	Mesh body(bodyVerts, bodyInd, bodyTex);
	Mesh topHead(topHeadVerts, headInd, headTex);
	Mesh bottomHead(bottomHeadVerts, headInd, headTex);



	// Floor
	std::vector <Vertex> floorVerts1(floorVertices1, floorVertices1 + sizeof(floorVertices1) / sizeof(Vertex));
	std::vector <Vertex> floorVerts2(floorVertices2, floorVertices2 + sizeof(floorVertices2) / sizeof(Vertex));
	std::vector <Vertex> floorVerts3(floorVertices3, floorVertices3 + sizeof(floorVertices3) / sizeof(Vertex));
	std::vector <Vertex> floorVerts4(floorVertices4, floorVertices4 + sizeof(floorVertices4) / sizeof(Vertex));
	std::vector <Vertex> floorVerts5(floorVertices5, floorVertices5 + sizeof(floorVertices5) / sizeof(Vertex));
	std::vector <Vertex> floorVerts6(floorVertices6, floorVertices6 + sizeof(floorVertices6) / sizeof(Vertex));
	std::vector <Vertex> floorVerts7(floorVertices7, floorVertices7 + sizeof(floorVertices7) / sizeof(Vertex));

	std::vector <GLuint> floorInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));

	std::vector <Texture> floorTex(floorTextures, floorTextures + sizeof(floorTextures) / sizeof(Texture));
	std::vector <Texture> plankTex(plankTextures, plankTextures + sizeof(plankTextures) / sizeof(Texture));
	

	Mesh floor1(floorVerts1, floorInd, floorTex);
	Mesh floor2(floorVerts2, floorInd, floorTex);
	Mesh floor3(floorVerts3, floorInd, floorTex);
	Mesh floor4(floorVerts4, floorInd, floorTex);
	Mesh floor5(floorVerts5, floorInd, floorTex);
	Mesh floor6(floorVerts6, floorInd, floorTex);
	Mesh floor7(floorVerts7, floorInd, plankTex);



	// Steps
	std::vector <Vertex> stepsVerticalVerts1(stepsVerticalVertices1, stepsVerticalVertices1 + sizeof(stepsVerticalVertices1) / sizeof(Vertex));
	std::vector <Vertex> stepsHorizontalVerts1(stepsHorizontalVertices1, stepsHorizontalVertices1 + sizeof(stepsHorizontalVertices1) / sizeof(Vertex));
	std::vector <Vertex> stepsVerticalVerts2(stepsVerticalVertices2, stepsVerticalVertices2 + sizeof(stepsVerticalVertices2) / sizeof(Vertex));
	std::vector <Vertex> stepsHorizontalVerts2(stepsHorizontalVertices2, stepsHorizontalVertices2 + sizeof(stepsHorizontalVertices2) / sizeof(Vertex));
	std::vector <Vertex> stepsVerticalVerts3(stepsVerticalVertices3, stepsVerticalVertices3 + sizeof(stepsVerticalVertices3) / sizeof(Vertex));
	std::vector <Vertex> stepsHorizontalVerts3(stepsHorizontalVertices3, stepsHorizontalVertices3 + sizeof(stepsHorizontalVertices3) / sizeof(Vertex));
	std::vector <Vertex> stepsVerticalVerts4(stepsVerticalVertices4, stepsVerticalVertices4 + sizeof(stepsVerticalVertices4) / sizeof(Vertex));
	std::vector <Vertex> stepsHorizontalVerts4(stepsHorizontalVertices4, stepsHorizontalVertices4 + sizeof(stepsHorizontalVertices4) / sizeof(Vertex));
	std::vector <Vertex> stepsVerticalVerts5(stepsVerticalVertices5, stepsVerticalVertices5 + sizeof(stepsVerticalVertices5) / sizeof(Vertex));
	std::vector <Vertex> stepsHorizontalVerts5(stepsHorizontalVertices5, stepsHorizontalVertices5 + sizeof(stepsHorizontalVertices5) / sizeof(Vertex));

	std::vector <GLuint> stepsInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));
	std::vector <Texture> stepsTex(pyramidTextures, pyramidTextures + sizeof(pyramidTextures) / sizeof(Texture));


	Mesh stepsVertical1(stepsVerticalVerts1, stepsInd, stepsTex);
	Mesh stepsHorizontal1(stepsHorizontalVerts1, stepsInd, stepsTex);
	Mesh stepsVertical2(stepsVerticalVerts2, stepsInd, stepsTex);
	Mesh stepsHorizontal2(stepsHorizontalVerts2, stepsInd, stepsTex);
	Mesh stepsVertical3(stepsVerticalVerts3, stepsInd, stepsTex);
	Mesh stepsHorizontal3(stepsHorizontalVerts3, stepsInd, stepsTex);
	Mesh stepsVertical4(stepsVerticalVerts4, stepsInd, stepsTex);
	Mesh stepsHorizontal4(stepsHorizontalVerts4, stepsInd, stepsTex);
	Mesh stepsVertical5(stepsVerticalVerts5, stepsInd, stepsTex);
	Mesh stepsHorizontal5(stepsHorizontalVerts5, stepsInd, stepsTex);



	// Pyramids
	std::vector <Vertex> pyramidVerts1(pyramidVertices1, pyramidVertices1 + sizeof(pyramidVertices1) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts2(pyramidVertices2, pyramidVertices2 + sizeof(pyramidVertices2) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts3(pyramidVertices3, pyramidVertices3 + sizeof(pyramidVertices3) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts4(pyramidVertices4, pyramidVertices4 + sizeof(pyramidVertices4) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts5(pyramidVertices5, pyramidVertices5 + sizeof(pyramidVertices5) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts6(pyramidVertices6, pyramidVertices6 + sizeof(pyramidVertices6) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts7(pyramidVertices7, pyramidVertices7 + sizeof(pyramidVertices7) / sizeof(Vertex));
	std::vector <Vertex> pyramidVerts8(pyramidVertices8, pyramidVertices8 + sizeof(pyramidVertices8) / sizeof(Vertex));

	std::vector <GLuint> pyramidInd(pyramidIndices, pyramidIndices + sizeof(pyramidIndices) / sizeof(GLuint));
	std::vector <Texture> pyramidTex(pyramidTextures, pyramidTextures + sizeof(pyramidTextures) / sizeof(Texture));
	

	Mesh pyramid1(pyramidVerts1, pyramidInd, pyramidTex);
	Mesh pyramid2(pyramidVerts2, pyramidInd, pyramidTex);
	Mesh pyramid3(pyramidVerts3, pyramidInd, pyramidTex);
	Mesh pyramid4(pyramidVerts4, pyramidInd, pyramidTex);
	Mesh pyramid5(pyramidVerts5, pyramidInd, pyramidTex);
	Mesh pyramid6(pyramidVerts6, pyramidInd, pyramidTex);
	Mesh pyramid7(pyramidVerts7, pyramidInd, pyramidTex);
	Mesh pyramid8(pyramidVerts8, pyramidInd, pyramidTex);



	// Sum Cubes
	std::vector <Vertex> cubeVerts1(cubeVertices1, cubeVertices1 + sizeof(cubeVertices1) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts2(cubeVertices2, cubeVertices2 + sizeof(cubeVertices2) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts3(cubeVertices3, cubeVertices3 + sizeof(cubeVertices3) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts4(cubeVertices4, cubeVertices4 + sizeof(cubeVertices4) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts5(cubeVertices5, cubeVertices5 + sizeof(cubeVertices5) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts6(cubeVertices6, cubeVertices6 + sizeof(cubeVertices6) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts7(cubeVertices7, cubeVertices7 + sizeof(cubeVertices7) / sizeof(Vertex));

	std::vector <Vertex> cubeVerts8(cubeVertices8, cubeVertices8 + sizeof(cubeVertices8) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts9(cubeVertices9, cubeVertices9 + sizeof(cubeVertices9) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts10(cubeVertices10, cubeVertices10 + sizeof(cubeVertices10) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts11(cubeVertices11, cubeVertices11 + sizeof(cubeVertices11) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts12(cubeVertices12, cubeVertices12 + sizeof(cubeVertices12) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts13(cubeVertices13, cubeVertices13 + sizeof(cubeVertices13) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts14(cubeVertices14, cubeVertices14 + sizeof(cubeVertices14) / sizeof(Vertex));

	std::vector <Vertex> cubeVerts15(cubeVertices15, cubeVertices15 + sizeof(cubeVertices15) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts16(cubeVertices16, cubeVertices16 + sizeof(cubeVertices16) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts17(cubeVertices17, cubeVertices17 + sizeof(cubeVertices17) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts18(cubeVertices18, cubeVertices18 + sizeof(cubeVertices18) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts19(cubeVertices19, cubeVertices19 + sizeof(cubeVertices19) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts20(cubeVertices20, cubeVertices20 + sizeof(cubeVertices20) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts21(cubeVertices21, cubeVertices21 + sizeof(cubeVertices21) / sizeof(Vertex));

	std::vector <Vertex> cubeVerts22(cubeVertices22, cubeVertices22 + sizeof(cubeVertices22) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts23(cubeVertices23, cubeVertices23 + sizeof(cubeVertices23) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts24(cubeVertices24, cubeVertices24 + sizeof(cubeVertices24) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts25(cubeVertices25, cubeVertices25 + sizeof(cubeVertices25) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts26(cubeVertices26, cubeVertices26 + sizeof(cubeVertices26) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts27(cubeVertices27, cubeVertices27 + sizeof(cubeVertices27) / sizeof(Vertex));
	std::vector <Vertex> cubeVerts28(cubeVertices28, cubeVertices28 + sizeof(cubeVertices28) / sizeof(Vertex));

	std::vector <GLuint> cubeInd(cubeIndices, cubeIndices + sizeof(cubeIndices) / sizeof(GLuint));

	std::vector <Texture> cube1Tex(number5Textures, number5Textures + sizeof(number5Textures) / sizeof(Texture));
	std::vector <Texture> cube2Tex(plusSignTextures, plusSignTextures + sizeof(plusSignTextures) / sizeof(Texture));
	std::vector <Texture> cube3Tex(number2Textures, number2Textures + sizeof(number2Textures) / sizeof(Texture));
	std::vector <Texture> cube4Tex(equalsSignTextures, equalsSignTextures + sizeof(equalsSignTextures) / sizeof(Texture));
	std::vector <Texture> cube5Tex(questionMarkTextures, questionMarkTextures + sizeof(questionMarkTextures) / sizeof(Texture));
	std::vector <Texture> cube6Tex(number7Textures, number7Textures + sizeof(number7Textures) / sizeof(Texture));
	std::vector <Texture> cube7Tex(number8Textures, number8Textures + sizeof(number8Textures) / sizeof(Texture));

	std::vector <Texture> cube8Tex(number8Textures, number8Textures + sizeof(number8Textures) / sizeof(Texture));
	std::vector <Texture> cube9Tex(minusSignTextures, minusSignTextures + sizeof(minusSignTextures) / sizeof(Texture));
	std::vector <Texture> cube10Tex(number4Textures, number4Textures + sizeof(number4Textures) / sizeof(Texture));
	std::vector <Texture> cube11Tex(equalsSignTextures, equalsSignTextures + sizeof(equalsSignTextures) / sizeof(Texture));
	std::vector <Texture> cube12Tex(questionMarkTextures, questionMarkTextures + sizeof(questionMarkTextures) / sizeof(Texture));
	std::vector <Texture> cube13Tex(number3Textures, number3Textures + sizeof(number3Textures) / sizeof(Texture));
	std::vector <Texture> cube14Tex(number4Textures, number4Textures + sizeof(number4Textures) / sizeof(Texture));

	std::vector <Texture> cube15Tex(number6Textures, number6Textures + sizeof(number6Textures) / sizeof(Texture));
	std::vector <Texture> cube16Tex(multiplySignTextures, multiplySignTextures + sizeof(multiplySignTextures) / sizeof(Texture));
	std::vector <Texture> cube17Tex(number0Textures, number0Textures + sizeof(number0Textures) / sizeof(Texture));
	std::vector <Texture> cube18Tex(equalsSignTextures, equalsSignTextures + sizeof(equalsSignTextures) / sizeof(Texture));
	std::vector <Texture> cube19Tex(questionMarkTextures, questionMarkTextures + sizeof(questionMarkTextures) / sizeof(Texture));
	std::vector <Texture> cube20Tex(number6Textures, number6Textures + sizeof(number6Textures) / sizeof(Texture));
	std::vector <Texture> cube21Tex(number0Textures, number0Textures + sizeof(number0Textures) / sizeof(Texture));

	std::vector <Texture> cube22Tex(number9Textures, number9Textures + sizeof(number9Textures) / sizeof(Texture));
	std::vector <Texture> cube23Tex(divideSignTextures, divideSignTextures + sizeof(divideSignTextures) / sizeof(Texture));
	std::vector <Texture> cube24Tex(number3Textures, number3Textures + sizeof(number3Textures) / sizeof(Texture));
	std::vector <Texture> cube25Tex(equalsSignTextures, equalsSignTextures + sizeof(equalsSignTextures) / sizeof(Texture));
	std::vector <Texture> cube26Tex(questionMarkTextures, questionMarkTextures + sizeof(questionMarkTextures) / sizeof(Texture));
	std::vector <Texture> cube27Tex(number3Textures, number3Textures + sizeof(number3Textures) / sizeof(Texture));
	std::vector <Texture> cube28Tex(number4Textures, number4Textures + sizeof(number4Textures) / sizeof(Texture));


	Mesh cube1(cubeVerts1, cubeInd, cube1Tex);
	Mesh cube2(cubeVerts2, cubeInd, cube2Tex);
	Mesh cube3(cubeVerts3, cubeInd, cube3Tex);
	Mesh cube4(cubeVerts4, cubeInd, cube4Tex);
	Mesh cube5(cubeVerts5, cubeInd, cube5Tex);
	Mesh cube6(cubeVerts6, cubeInd, cube6Tex);
	Mesh cube7(cubeVerts7, cubeInd, cube7Tex);
	Mesh cube8(cubeVerts8, cubeInd, cube8Tex);
	Mesh cube9(cubeVerts9, cubeInd, cube9Tex);
	Mesh cube10(cubeVerts10, cubeInd, cube10Tex);
	Mesh cube11(cubeVerts11, cubeInd, cube11Tex);
	Mesh cube12(cubeVerts12, cubeInd, cube12Tex);
	Mesh cube13(cubeVerts13, cubeInd, cube13Tex);
	Mesh cube14(cubeVerts14, cubeInd, cube14Tex);
	Mesh cube15(cubeVerts15, cubeInd, cube15Tex);
	Mesh cube16(cubeVerts16, cubeInd, cube16Tex);
	Mesh cube17(cubeVerts17, cubeInd, cube17Tex);
	Mesh cube18(cubeVerts18, cubeInd, cube18Tex);
	Mesh cube19(cubeVerts19, cubeInd, cube19Tex);
	Mesh cube20(cubeVerts20, cubeInd, cube20Tex);
	Mesh cube21(cubeVerts21, cubeInd, cube21Tex);
	Mesh cube22(cubeVerts22, cubeInd, cube22Tex);
	Mesh cube23(cubeVerts23, cubeInd, cube23Tex);
	Mesh cube24(cubeVerts24, cubeInd, cube24Tex);
	Mesh cube25(cubeVerts25, cubeInd, cube25Tex);
	Mesh cube26(cubeVerts26, cubeInd, cube26Tex);
	Mesh cube27(cubeVerts27, cubeInd, cube27Tex);
	Mesh cube28(cubeVerts28, cubeInd, cube28Tex);



	// Outer Walls
	std::vector <Vertex> outerWallVerts1(outerWallVertices1, outerWallVertices1 + sizeof(outerWallVertices1) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts2(outerWallVertices2, outerWallVertices2 + sizeof(outerWallVertices2) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts3(outerWallVertices3, outerWallVertices3 + sizeof(outerWallVertices3) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts4(outerWallVertices4, outerWallVertices4 + sizeof(outerWallVertices4) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts5(outerWallVertices5, outerWallVertices5 + sizeof(outerWallVertices5) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts6(outerWallVertices6, outerWallVertices6 + sizeof(outerWallVertices6) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts7(outerWallVertices7, outerWallVertices7 + sizeof(outerWallVertices7) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts8(outerWallVertices8, outerWallVertices8 + sizeof(outerWallVertices8) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts9(outerWallVertices9, outerWallVertices9 + sizeof(outerWallVertices9) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts10(outerWallVertices10, outerWallVertices10 + sizeof(outerWallVertices10) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts11(outerWallVertices11, outerWallVertices11 + sizeof(outerWallVertices11) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts12(outerWallVertices12, outerWallVertices12 + sizeof(outerWallVertices12) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts13(outerWallVertices13, outerWallVertices13 + sizeof(outerWallVertices13) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts14(outerWallVertices14, outerWallVertices14 + sizeof(outerWallVertices14) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts15(outerWallVertices15, outerWallVertices15 + sizeof(outerWallVertices15) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts16(outerWallVertices16, outerWallVertices16 + sizeof(outerWallVertices16) / sizeof(Vertex));
	std::vector <Vertex> outerWallVerts17(outerWallVertices17, outerWallVertices17 + sizeof(outerWallVertices17) / sizeof(Vertex));

	std::vector <GLuint> outerWallInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));

	std::vector <Texture> outerWallTex(outerWallTextures, outerWallTextures + sizeof(outerWallTextures) / sizeof(Texture));


	Mesh outerWall1(outerWallVerts1, outerWallInd, outerWallTex);
	Mesh outerWall2(outerWallVerts2, outerWallInd, outerWallTex);
	Mesh outerWall3(outerWallVerts3, outerWallInd, outerWallTex);
	Mesh outerWall4(outerWallVerts4, outerWallInd, outerWallTex);
	Mesh outerWall5(outerWallVerts5, outerWallInd, outerWallTex);
	Mesh outerWall6(outerWallVerts6, outerWallInd, outerWallTex);
	Mesh outerWall7(outerWallVerts7, outerWallInd, outerWallTex);
	Mesh outerWall8(outerWallVerts8, outerWallInd, outerWallTex);
	Mesh outerWall9(outerWallVerts9, outerWallInd, outerWallTex);
	Mesh outerWall10(outerWallVerts10, outerWallInd, outerWallTex);
	Mesh outerWall11(outerWallVerts11, outerWallInd, outerWallTex);
	Mesh outerWall12(outerWallVerts12, outerWallInd, outerWallTex);
	Mesh outerWall13(outerWallVerts13, outerWallInd, outerWallTex);
	Mesh outerWall14(outerWallVerts14, outerWallInd, outerWallTex);
	Mesh outerWall15(outerWallVerts15, outerWallInd, outerWallTex);
	Mesh outerWall16(outerWallVerts16, outerWallInd, outerWallTex);
	Mesh outerWall17(outerWallVerts17, outerWallInd, outerWallTex);



	// Middle Walls
	std::vector <Vertex> middleWallVerts1(middleWallVertices1, middleWallVertices1 + sizeof(middleWallVertices1) / sizeof(Vertex));
	std::vector <Vertex> middleWallVerts2(middleWallVertices2, middleWallVertices2 + sizeof(middleWallVertices2) / sizeof(Vertex));
	std::vector <Vertex> middleWallVerts3(middleWallVertices3, middleWallVertices3 + sizeof(middleWallVertices3) / sizeof(Vertex));
	std::vector <Vertex> middleWallVerts4(middleWallVertices4, middleWallVertices4 + sizeof(middleWallVertices4) / sizeof(Vertex));

	std::vector <GLuint> middleWallInd(cubeIndices, cubeIndices + sizeof(cubeIndices) / sizeof(GLuint));

	std::vector <Texture> middleWallTex(middleWallTextures, middleWallTextures + sizeof(middleWallTextures) / sizeof(Texture));


	Mesh middleWall1(middleWallVerts1, middleWallInd, middleWallTex);
	Mesh middleWall2(middleWallVerts2, middleWallInd, middleWallTex);
	Mesh middleWall3(middleWallVerts3, middleWallInd, middleWallTex);
	Mesh middleWall4(middleWallVerts4, middleWallInd, middleWallTex);



	// Middle Wall ends
	std::vector <Vertex> middleWallEndsVerts1(middleWallEndsVertices1, middleWallEndsVertices1 + sizeof(middleWallEndsVertices1) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts2(middleWallEndsVertices2, middleWallEndsVertices2 + sizeof(middleWallEndsVertices2) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts3(middleWallEndsVertices3, middleWallEndsVertices3 + sizeof(middleWallEndsVertices3) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts4(middleWallEndsVertices4, middleWallEndsVertices4 + sizeof(middleWallEndsVertices4) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts5(middleWallEndsVertices5, middleWallEndsVertices5 + sizeof(middleWallEndsVertices5) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts6(middleWallEndsVertices6, middleWallEndsVertices6 + sizeof(middleWallEndsVertices6) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts7(middleWallEndsVertices7, middleWallEndsVertices7 + sizeof(middleWallEndsVertices7) / sizeof(Vertex));
	std::vector <Vertex> middleWallEndsVerts8(middleWallEndsVertices8, middleWallEndsVertices8 + sizeof(middleWallEndsVertices8) / sizeof(Vertex));

	std::vector <Texture> middleWallEndsTex(middleWallEndsTextures, middleWallEndsTextures + sizeof(middleWallEndsTextures) / sizeof(Texture));


	Mesh middleWallEnds1(middleWallEndsVerts1, floorInd, middleWallEndsTex);
	Mesh middleWallEnds2(middleWallEndsVerts2, floorInd, middleWallEndsTex);
	Mesh middleWallEnds3(middleWallEndsVerts3, floorInd, middleWallEndsTex);
	Mesh middleWallEnds4(middleWallEndsVerts4, floorInd, middleWallEndsTex);
	Mesh middleWallEnds5(middleWallEndsVerts5, floorInd, middleWallEndsTex);
	Mesh middleWallEnds6(middleWallEndsVerts6, floorInd, middleWallEndsTex);
	Mesh middleWallEnds7(middleWallEndsVerts7, floorInd, middleWallEndsTex);
	Mesh middleWallEnds8(middleWallEndsVerts8, floorInd, middleWallEndsTex);



	// Skybox shaders
	Shader skyboxShader("skybox.vert", "skybox.frag");



	// Create light object
	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(-256.0f, 2100.0f, -2833.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);


	// Activate Shaders and create light source
	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);
	
	skyboxShader.Activate();
	glUniform1i(glGetUniformLocation(skyboxShader.ID, "skybox"), 0);


	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);

	// Creates camera (player) object
	Camera camera(width, height, glm::vec3(-256.0f, 2030.0f, 300.0f));
	
	// Skybox 
	// Create VAO, VBO, and EBO for skybox
	unsigned int skyboxVAO, skyboxVBO, skyboxEBO;
	glGenVertexArrays(1, &skyboxVAO);
	glGenBuffers(1, &skyboxVBO);
	glGenBuffers(1, &skyboxEBO);
	glBindVertexArray(skyboxVAO);
	glBindBuffer(GL_ARRAY_BUFFER, skyboxVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), &skyboxVertices, GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, skyboxEBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(skyboxIndices), &skyboxIndices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	// All faces of cubemap 
	std::string facesCubemap[6] =
	{
		"skybox/right.jpg",
		"skybox/left.jpg",
		"skybox/top.jpg",
		"skybox/bottom.jpg",
		"skybox/front.jpg",
		"skybox/back.jpg"
	};

	// Creates cubemap texture object
	unsigned int cubemapTexture;
	glGenTextures(1, &cubemapTexture);
	glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	// Prevent seams between textures
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

	// Cycles through all textures and attaches them to cubemap object
	for (unsigned int i = 0; i < 6; i++)
	{
		int width, height, nrChannels;
		unsigned char* data = stbi_load(facesCubemap[i].c_str(), &width, &height, &nrChannels, 0);
		if (data)
		{
			stbi_set_flip_vertically_on_load(false);
			glTexImage2D
			(
				GL_TEXTURE_CUBE_MAP_POSITIVE_X + i,
				0,
				GL_RGB,
				width,
				height,
				0,
				GL_RGB,
				GL_UNSIGNED_BYTE,
				data
			);
			stbi_image_free(data);
		}
		else
		{
			std::cout << "Failed to load texture: " << facesCubemap[i] << std::endl;
			stbi_image_free(data);
		}
	}
	



	// Timer and counter variables
	double crntTime = 0.0;
	int timerCount = 0;
	int objectCount = 0;
	bool changeDirection = false;
	std::string finalTime;

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Update timer
		crntTime = glfwGetTime();

		// Detect if player has finished the game and print their time
		if (camera.Position.z < -2710 && timerCount < 1)
		{
			printf("Finishing Time: %f \n", crntTime);
			finalTime = std::to_string(crntTime);
			timerCount++;
		}

		// Create title
		if (timerCount == 1) {
			std::string newTitle = "Game Window          x:" + std::to_string(camera.Position.x) + "  y:" + std::to_string(camera.Position.y) + "  z:" + std::to_string(camera.Position.z) + "             Finishing Time: " + finalTime;
			glfwSetWindowTitle(window, newTitle.c_str());
		}
		else {
			std::string newTitle = "Game Window          x:" + std::to_string(camera.Position.x) + "  y:" + std::to_string(camera.Position.y) + "  z:" + std::to_string(camera.Position.z) + "             Timer: " + std::to_string(crntTime);
			glfwSetWindowTitle(window, newTitle.c_str());
		}

		// Hierarchical Object Movement
		if (changeDirection == false)
		{
			if (objectCount < 2350) 
			{
				body.translation += glm::vec3(0.1f, 0.0f, 0.0f);
				topHead.translation += glm::vec3(0.1f, 0.0f, 0.0f);
				bottomHead.translation += glm::vec3(0.1f, 0.0f, 0.0f);
				if (objectCount > 500)
				{
					topHead.rotation += glm::quat(0.0f, 0.0f, 0.0000005f, 0.0f);
					bottomHead.rotation += glm::quat(0.0f, 0.0f, -0.0000005f, 0.0f);
				}
				objectCount++;
			}
			if (objectCount == 2350) 
			{
				changeDirection = true;
				objectCount = 0;
			}
		}
		else
		{
			if (objectCount < 2350) 
			{
				body.translation += glm::vec3(-0.1f, 0.0f, 0.0f);
				topHead.translation += glm::vec3(-0.1f, 0.0f, 0.0f);
				bottomHead.translation += glm::vec3(-0.1f, 0.0f, 0.0f);
				if (objectCount > 500)
				{
					topHead.rotation += glm::quat(0.0f, 0.0f, -0.0000005f, 0.0f);
					bottomHead.rotation += glm::quat(0.0f, 0.0f, 0.0000005f, 0.0f);
				}
				objectCount++;
			}
			if (objectCount == 2350) 
			{
				changeDirection = false;
				objectCount = 0;
			}
		}


		// Specify color of background
		glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
		// Clean back buffer and assign new color 
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Handle camera inputs
		camera.Inputs(window);
		// Update and export camera matrix to Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 3000.0f);

		// Draws meshes
		body.Draw(shaderProgram, camera);
		topHead.Draw(shaderProgram, camera);
		bottomHead.Draw(shaderProgram, camera);
		floor1.Draw(shaderProgram, camera);
		floor2.Draw(shaderProgram, camera);
		floor3.Draw(shaderProgram, camera);
		floor4.Draw(shaderProgram, camera);
		floor5.Draw(shaderProgram, camera);
		floor6.Draw(shaderProgram, camera);
		floor7.Draw(shaderProgram, camera);
		stepsVertical1.Draw(shaderProgram, camera);
		stepsHorizontal1.Draw(shaderProgram, camera);
		stepsVertical2.Draw(shaderProgram, camera);
		stepsHorizontal2.Draw(shaderProgram, camera);
		stepsVertical3.Draw(shaderProgram, camera);
		stepsHorizontal3.Draw(shaderProgram, camera);
		stepsVertical4.Draw(shaderProgram, camera);
		stepsHorizontal4.Draw(shaderProgram, camera);
		stepsVertical5.Draw(shaderProgram, camera);
		stepsHorizontal5.Draw(shaderProgram, camera);
		pyramid1.Draw(shaderProgram, camera);
		pyramid2.Draw(shaderProgram, camera);
		pyramid3.Draw(shaderProgram, camera);
		pyramid4.Draw(shaderProgram, camera);
		pyramid5.Draw(shaderProgram, camera);
		pyramid6.Draw(shaderProgram, camera);
		pyramid7.Draw(shaderProgram, camera);
		pyramid8.Draw(shaderProgram, camera);
		cube1.Draw(shaderProgram, camera);
		cube2.Draw(shaderProgram, camera);
		cube3.Draw(shaderProgram, camera);
		cube4.Draw(shaderProgram, camera);
		cube5.Draw(shaderProgram, camera);
		cube6.Draw(shaderProgram, camera);
		cube7.Draw(shaderProgram, camera);
		cube8.Draw(shaderProgram, camera);
		cube9.Draw(shaderProgram, camera);
		cube10.Draw(shaderProgram, camera);
		cube11.Draw(shaderProgram, camera);
		cube12.Draw(shaderProgram, camera);
		cube13.Draw(shaderProgram, camera);
		cube14.Draw(shaderProgram, camera);
		cube15.Draw(shaderProgram, camera);
		cube16.Draw(shaderProgram, camera);
		cube17.Draw(shaderProgram, camera);
		cube18.Draw(shaderProgram, camera);
		cube19.Draw(shaderProgram, camera);
		cube20.Draw(shaderProgram, camera);
		cube21.Draw(shaderProgram, camera);
		cube22.Draw(shaderProgram, camera);
		cube23.Draw(shaderProgram, camera);
		cube24.Draw(shaderProgram, camera);
		cube25.Draw(shaderProgram, camera);
		cube26.Draw(shaderProgram, camera);
		cube27.Draw(shaderProgram, camera);
		cube28.Draw(shaderProgram, camera);
		outerWall1.Draw(shaderProgram, camera);
		outerWall2.Draw(shaderProgram, camera);
		outerWall3.Draw(shaderProgram, camera);
		outerWall4.Draw(shaderProgram, camera);
		outerWall5.Draw(shaderProgram, camera);
		outerWall6.Draw(shaderProgram, camera);
		outerWall7.Draw(shaderProgram, camera);
		outerWall8.Draw(shaderProgram, camera);
		outerWall9.Draw(shaderProgram, camera);
		outerWall10.Draw(shaderProgram, camera);
		outerWall11.Draw(shaderProgram, camera);
		outerWall12.Draw(shaderProgram, camera);
		outerWall13.Draw(shaderProgram, camera);
		outerWall14.Draw(shaderProgram, camera);
		outerWall15.Draw(shaderProgram, camera);
		outerWall16.Draw(shaderProgram, camera);
		outerWall17.Draw(shaderProgram, camera);
		middleWall1.Draw(shaderProgram, camera);
		middleWall2.Draw(shaderProgram, camera);
		middleWall3.Draw(shaderProgram, camera);
		middleWall4.Draw(shaderProgram, camera);
		middleWallEnds1.Draw(shaderProgram, camera);
		middleWallEnds2.Draw(shaderProgram, camera);
		middleWallEnds3.Draw(shaderProgram, camera);
		middleWallEnds4.Draw(shaderProgram, camera);
		middleWallEnds5.Draw(shaderProgram, camera);
		middleWallEnds6.Draw(shaderProgram, camera);
		middleWallEnds7.Draw(shaderProgram, camera);
		middleWallEnds8.Draw(shaderProgram, camera);
		
		
		glDepthFunc(GL_LEQUAL);

		// Skybox views
		skyboxShader.Activate();
		glm::mat4 view = glm::mat4(1.0f);
		glm::mat4 projection = glm::mat4(1.0f);

		view = glm::mat4(glm::mat3(glm::lookAt(camera.Position, camera.Position + camera.Orientation, camera.Up)));
		projection = glm::perspective(glm::radians(45.0f), (float)width / height, 0.1f, 100.0f);
		glUniformMatrix4fv(glGetUniformLocation(skyboxShader.ID, "view"), 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(glGetUniformLocation(skyboxShader.ID, "projection"), 1, GL_FALSE, glm::value_ptr(projection));

		glBindVertexArray(skyboxVAO);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
		glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
		glBindVertexArray(0);

		// Switch back to the normal depth function
		glDepthFunc(GL_LESS);

		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}


	// Delete objects 
	shaderProgram.Delete();
	skyboxShader.Delete();

	// Delete window 
	glfwDestroyWindow(window);

	// Terminate GLFW
	glfwTerminate();

	return 0;
}