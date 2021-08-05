#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

class Face {

	public:

		Face();
		//Default face,  couldn't figure out something
		//I wanted this in the constructor
		std::vector<std::vector<char>> face{
			{ 'D','D','D' },
			{ 'D','D','D' },
			{ 'D','D','D' }
		};
		void setColor(char ch);
		void printFace();

};