// HKOI_D105_DateCompare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int y0;
	int y1;
	int m0;
	int m1;
	int d0;
	int d1;
	scanf_s("%d %d %d", &y0, &m0, &d0);
	scanf_s("%d %d %d", &y1, &m1, &d1);

	bool before = true;
	if (y0 > y1) {
		before = false;
	}

	if (before && y0 == y1 && m0 > m1) {
		before = false;
	}

	if (before && y0 == y1 && m0 == m1 && d0 > d1) {
		before = false;
	}

	if (before) {
		if (y0 == y1 && m0 == m1 && d0 == d1) {
			std::cout << "Same" << "\n";
		}
		else {
			std::cout << "Before" << "\n";
		}
	}
	else {
		std::cout << "After" << "\n";
	}
    
return		0;
}

