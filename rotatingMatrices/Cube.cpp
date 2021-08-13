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
		std::swap(top, back);
		std::swap(top, bottom);
		std::swap(top, front);
		//B is Bottom
		break;
	case 'L':
		std::swap(front, right);
		std::swap(front, left);
		std::swap(left, back);
		//L is left
		break;
	case 'R':
		std::swap(front, left);
		std::swap(front, right);
		std::swap(right, back);
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

	
	std::swap(left, right);
	std::swap(top, bottom);


}

void Cube::upClockwise()
{

	//Swap first rows of all of the side faces except for top and bottom
	//Do this in a clockwise fashion
	std::swap(front.face[0], left.face[0]);
	std::swap(front.face[0], right.face[0]);
	std::swap(right.face[0], back.face[0]);



	top.printFace();

	//Rotate top face clockwise 


	turns++;
}

void Cube::upCounter()
{

	//Swap first rows of all of the side faces except for top and bottom
	//Do this in a counterclockwise fashion
	std::swap(front.face[0], right.face[0]);
	std::swap(front.face[0], left.face[0]);
	std::swap(left.face[0], back.face[0]);

	//Rotate top face counter clockwise
		
	top.rotateCounter();
	

	turns++;
}

void Cube::downClockwise()
{
}

void Cube::downCounter()
{
}

void Cube::leftClockwise()
{


	turns++;
}

void Cube::leftCounter()
{



	//Rotate left face counter clockwise

	left.rotateCounter();



	turns++;
}


void Cube::rightClockwise()
{






	turns++;
}

void Cube::rightCounter()
{

	//Rotate right face counter clockwise

	right.rotateCounter();
	turns++;
}

void Cube::frontClockwise()
{


	turns++;
}

void Cube::frontCounter()
{



	//Rotate front face counter clockwise

	front.rotateCounter();
	turns++;
}

void Cube::backClockwise()
{


	turns++;
}

void Cube::backCounter()
{


	//Rotate back face counter clockwise

	back.rotateCounter();
	turns++;
}

void Cube::shuffleCube()
{

	//This says what operation to do
	int random = 0;

	//1 through 3, this is how many times that action will be performed, no point doing any operation more than 4 times because it will just do a bunch of useless operations
	//Also doing any operation 4 times is useless

	int times = 3;


	switch (random) {
		case 0:

			for (int i = 0; i < times; i++) {
				upClockwise();
			}


		case 1:

			for (int i = 0; i < times; i++) {
				upCounter();
			}


		case 2:

			for (int i = 0; i < times; i++) {
				leftClockwise();
			}


		case 3:

			for (int i = 0; i < times; i++) {
				leftCounter();
			}

		case 4:
			for (int i = 0; i < times; i++) {
				rightClockwise();
			}

		case 5:
			for (int i = 0; i < times; i++) {
				rightCounter();
			}
		

		case 6:

			for (int i = 0; i < times; i++) {
				frontClockwise();
			}

		case 7:

			for (int i = 0; i < times; i++) {
				frontCounter();
			}

		case 9:

			for (int i = 0; i < times; i++) {
				downClockwise();
			}

		case 10:
			for (int i = 0; i < times; i++) {
				downCounter();
			}

		case 11:
			for (int i = 0; i < times; i++) {
				backCounter();
			}

		case 12:
			for (int i = 0; i < times; i++) {
				backCounter();
			}

		}

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
