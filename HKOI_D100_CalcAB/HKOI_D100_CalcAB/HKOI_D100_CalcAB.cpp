// HKOI_D100_CalcAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	
	std::size_t index = input.find(" ");
	std::string astr = input.substr(0, index);
	std::string bstr = input.substr(index + 1);

	int a = std::stol(astr);
	int b = std::stol(bstr);

	std::cout << (a + b) << "\n";
    return 0;
}

