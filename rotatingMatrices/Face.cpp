

#include "Face.h"

Face::Face()
{


	

}


/*
	Set color of this face, useful for brevity in the cube constructor, not much else because other functions modify the values directly when they need to 
	This char is input by me, so it doesn't need error trapping
*/
void Face::setColor(char ch)
{

	for (int i = 0; i < 3; i++) {
	
		for (int k = 0; k < 3; k++) {
			
			face[i][k] = ch;
		
		}
	}



}

void Face::printFace()
{

	for (auto row_obj : face)
	{
		for (auto elem : row_obj)
		{
			std::cout << elem << ", ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}

void Face::rotateClockwise()
{

	int N = face.size();

	//Transpose Matrix
	for (int i = 0; i < n; i++) {
	
		for (int j = 0; j < n; i++) {
		
			char tmp = face[i][j];
			face[i][j] = face[j][i];
			face[j][i] = tmp;
		
		}
	
	}


	//Flip Horizontally
	//We're swapping the left one with the right one for every row with this
	for (int i = 0; i < N; i++) {
	
		for (int j = 0; j < N; j++) {
		
			char tmp = face[i][j];
			face[i][j] = face[i][N - 1 - j];
			face[i][N-1-j] = tmp;
		
		}
	
	}


}

void Face::rotateCounter()
{

	int N = face.size();

	for (int x = 0; x < N / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < N - x - 1; y++) {
			// Store current cell in
			// temp variable
			char temp = face[x][y];

			// Move values from right to top
			face[x][y] = face[y][N - 1 - x];

			// Move values from bottom to right
			face[y][N - 1 - x]
				= face[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			face[N - 1 - x][N - 1 - y]
				= face[N - 1 - y][x];

			// Assign temp to left
			face[N - 1 - y][x] = temp;
		}
	}



}
