#include "Cube.h"


//Initialize faces to legal position, default solved
Cube::Cube()
{

	//Initialize all faces
	
	front.setColor('G');
	back.setColor('B');
	left.setColor('R');
	right.setColor('O');
	top.setColor('Y');
	bottom.setColor('W');

	turns = 0;

}

void Cube::switchFront(char f)
{
}

void Cube::flipCube()
{
}

void Cube::upClockwise()
{


}

void Cube::upCounter()
{


}

void Cube::leftClockwise()
{


}

void Cube::leftCounter()
{


}

void Cube::rightClockwise()
{


}

void Cube::rightCounter()
{


}

void Cube::frontClockwise()
{


}

void Cube::frontCounter()
{


}

void Cube::backClockwise()
{


}

void Cube::backCounter()
{


}

void Cube::shuffleCube()
{
}

void Cube::printCube()
{





	std::cout << "FRONT" << std::endl;

	front.printFace();

	std::cout << "BACK" << std::endl;

	back.printFace();

	std::cout << "LEFT" << std::endl;

	left.printFace();

	std::cout << "RIGHT" << std::endl;

	right.printFace();

	std::cout << "TOP" << std::endl;

	top.printFace();
	
	std::cout << "BOTTOM" << std::endl;

	bottom.printFace();


}
