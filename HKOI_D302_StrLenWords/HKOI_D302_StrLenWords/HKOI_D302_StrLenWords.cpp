// HKOI_D302_StrLenWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	char inputchar[255];
	scanf_s("%s", inputchar);
	std::string inputstr(inputchar);
	std::cout << inputstr << '\n';
	std::cout << inputstr.length() << '\n';

	int count = 0;
	for (int i = 0; i < inputstr.length(); i++) {
		if (inputstr.length() == i) {
			count++;
			break;
		} else if (inputstr.at(i) == ' ') {
			count++;
		}
	}

	std::cout << count << '\n';
    return 0;
}

