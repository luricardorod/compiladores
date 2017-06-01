// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "CLexicStates.h"

int main()
{
	CLexicStates lexCompiler;

	while (true)
	{
		std::string mystr;
		std::cout << "Introduce texto\n";
		getline(std::cin, mystr);
		lexCompiler.Compile(&mystr);
	}

	return 0;
}

