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
		
		for (int x = 0; x < top.face.size() / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < top.face.size() - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = top.face[x][y];

			// Move values from right to top
			top.face[x][y] = top.face[y][top.face.size() - 1 - x];

			// Move values from bottom to right
			top.face[y][top.face.size() - 1 - x]
				= top.face[top.face.size() - 1 - x][top.face.size() - 1 - y];

			// Move values from left to bottom
			top.face[top.face.size() - 1 - x][top.face.size() - 1 - y]
				= top.face[top.face.size() - 1 - y][x];

			// Assign temp to left
			top.face[top.face.size() - 1 - y][x] = temp;
		}
	}
	

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

	for (int x = 0; x < left.face.size() / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < left.face.size() - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = left.face[x][y];

			// Move values from right to top
			left.face[x][y] = left.face[y][left.face.size() - 1 - x];

			// Move values from bottom to right
			left.face[y][left.face.size() - 1 - x]
				= left.face[left.face.size() - 1 - x][left.face.size() - 1 - y];

			// Move values from left to bottom
			left.face[left.face.size() - 1 - x][left.face.size() - 1 - y]
				= left.face[left.face.size() - 1 - y][x];

			// Assign temp to left
			left.face[left.face.size() - 1 - y][x] = temp;
		}
	}



	turns++;
}


void Cube::rightClockwise()
{






	turns++;
}

void Cube::rightCounter()
{

	//Rotate right face counter clockwise

	for (int x = 0; x < right.face.size() / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < right.face.size() - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = right.face[x][y];

			// Move values from right to top
			right.face[x][y] = right.face[y][right.face.size() - 1 - x];

			// Move values from bottom to right
			right.face[y][right.face.size() - 1 - x]
				= right.face[right.face.size() - 1 - x][right.face.size() - 1 - y];

			// Move values from left to bottom
			right.face[right.face.size() - 1 - x][right.face.size() - 1 - y]
				= right.face[right.face.size() - 1 - y][x];

			// Assign temp to left
			right.face[right.face.size() - 1 - y][x] = temp;
		}
	}
	turns++;
}

void Cube::frontClockwise()
{


	turns++;
}

void Cube::frontCounter()
{



	//Rotate front face counter clockwise

	for (int x = 0; x < front.face.size() / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < front.face.size() - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = front.face[x][y];

			// Move values from right to top
			front.face[x][y] = front.face[y][front.face.size() - 1 - x];

			// Move values from bottom to right
			front.face[y][front.face.size() - 1 - x]
				= front.face[front.face.size() - 1 - x][front.face.size() - 1 - y];

			// Move values from left to bottom
			front.face[front.face.size() - 1 - x][front.face.size() - 1 - y]
				= front.face[front.face.size() - 1 - y][x];

			// Assign temp to left
			front.face[front.face.size() - 1 - y][x] = temp;
		}
	}

	turns++;
}

void Cube::backClockwise()
{


	turns++;
}

void Cube::backCounter()
{


	//Rotate back face counter clockwise

	for (int x = 0; x < back.face.size() / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < back.face.size() - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = back.face[x][y];

			// Move values from right to top
			back.face[x][y] = back.face[y][back.face.size() - 1 - x];

			// Move values from bottom to right
			back.face[y][back.face.size() - 1 - x]
				= back.face[back.face.size() - 1 - x][back.face.size() - 1 - y];

			// Move values from left to bottom
			back.face[back.face.size() - 1 - x][back.face.size() - 1 - y]
				= back.face[back.face.size() - 1 - y][x];

			// Assign temp to left
			back.face[back.face.size() - 1 - y][x] = temp;
		}
	}
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
