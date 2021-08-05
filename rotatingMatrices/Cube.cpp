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

	//Rotate top face


	turns++;
}

void Cube::leftClockwise()
{


	turns++;
}

void Cube::leftCounter()
{


	turns++;
}

void Cube::rightClockwise()
{


	turns++;
}

void Cube::rightCounter()
{


	turns++;
}

void Cube::frontClockwise()
{


	turns++;
}

void Cube::frontCounter()
{


	turns++;
}

void Cube::backClockwise()
{


	turns++;
}

void Cube::backCounter()
{

	turns++;
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
