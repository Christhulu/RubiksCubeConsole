

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
