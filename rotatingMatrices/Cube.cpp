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

void Cube::switchFront(char c)
{


	/*
		T- Top
		B- Bottom
		L- Left
		R- Right
		A- Back
	
	*/

	switch (c) {
	case 'T':
		
		/*
		* 

			Left is the Same
			Right is the Same


			Front is new Bottom
			Back is new Top

			Old Bottom is new Back

			Front ->Bottom
			Front ->Top

			

		*/

		std::swap(top, back);
		std::swap(back, front);
		std::swap(back, bottom);

		break; 
	case 'B':
		
		//B is Bottom
		break;
	case 'L':
		
		//L is left
		break;
	case 'R':
		
		//R is Right
		break;
	case 'A':

		//A is opposite of top

		/*
			Front is Back
			Left is Right
		
		*/
		std::swap(front, back);
		std::swap(left, right);
		break;

	}








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

//Reset cube to default state
void Cube::resetCube()
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
