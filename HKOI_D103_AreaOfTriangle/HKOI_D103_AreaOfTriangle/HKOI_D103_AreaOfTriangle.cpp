// HKOI_D103_AreaOfTriangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

#define PI 3.14159265

int main()
{
	int in1 = 0;
	int in2 = 0;
	int in3 = 0;

	char inchar1[5];
	char inchar2[5];
	char inchar3[5];

	std::cin >> inchar1;
	std::cin >> inchar2;
	std::cin >> inchar3;

	in1 = std::atoi(inchar1);
	in2 = std::atoi(inchar2);
	in3 = std::atoi(inchar3);

	float result = (in1 * in2 * sin(in3*PI/180)) / 2;

	float corr = roundf(result * 1000.0) / 1000.0;

	printf("%.3f\n", in1, in2, in3, corr);

    return 0;
}

