#pragma once

#include "Face.h"

class Cube
{

	public:

		Cube();
		Face front;
		Face left;
		Face right;
		Face back;
		Face top;
		Face bottom;

		//Switch the front face to the side referred to by char
		//This will inevitably end up switching the others
		void switchFront(char f);
		void flipCube();

		//Operations
		//Might be easier to work with knowing that we have a set front face to work off of
		void upClockwise();
		void upCounter();
		void downClockwise();
		void downCounter();
		void leftClockwise();
		void leftCounter();
		void rightClockwise();
		void rightCounter();
		void frontClockwise();
		void frontCounter();
		void backClockwise();
		void backCounter();



		//Use the previous methods to randomly shake up the cube, this makes sure we get a random cube but it is also legal
		void shuffleCube();
		void printCube();
		void resetCube();

	private:

		int turns;




};

