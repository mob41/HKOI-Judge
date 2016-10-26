// HKOI_D102_BusFare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>

int main()
{
	float input = 0;

	char inputchar[5];

	std::cin >> inputchar;

	std::string inputstr(inputchar);

	std::string intstr = inputstr.substr(1, inputstr.length() - 1);
	input = std::atof(intstr.c_str());

	printf("$%.1f\n", ceilf(input / 2 * 10.0) / 10.0);

	return 0;
}


