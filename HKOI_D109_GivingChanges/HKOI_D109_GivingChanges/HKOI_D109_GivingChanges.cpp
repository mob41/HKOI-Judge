// HKOI_D109_GivingChanges.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int changes[] = { 1000,500,100,50,20,10 };
	int input = 0;

	std::cin >> input;

	int count = 0;

	for (int i = 0; i < 6; i++) {
		if (input - changes[i] >= 0) {
			input -= changes[i];
			std::cout << changes[i] << '\n';
			i = -1;
			count++;
		}

		if (input <= 0) {
			break;
		}
	}
	if (count == 0) {
		std::cout << input << '\n';
	}

    return 0;
}

