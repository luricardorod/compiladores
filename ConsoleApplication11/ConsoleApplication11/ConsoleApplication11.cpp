// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

namespace LEXYC_TYPE
{
	enum E
	{
		lNONE,
		lID,
		lNUMBER,
		lNUM_MAX
	};
}
//48 57  numeros  65 a 90 may  97 122 min
bool IsNumber(char character) {
	return character > 47 && character < 58;
}
bool IsLetter(char character) {
	return (character > 64 && character < 91) || (character > 96 && character < 123);
}
void GetLex(std::string text) {
	char temp[30];
	int positionBuffer = 0;
	LEXYC_TYPE::E state = LEXYC_TYPE::lNONE;
	for (int i = 0; i < text.length(); i++)
	{
		temp[positionBuffer] = text[i];
		switch (state)
		{
		case LEXYC_TYPE::lNONE:
			if (text[i] == 13 || text[i] == 32)
			{
				positionBuffer = 0;
			}
			else if (IsNumber(text[i]) || IsLetter(text[i]))
			{
				positionBuffer++;
				state = LEXYC_TYPE::lID;
			}
			else
			{ 
				positionBuffer++;
				temp[positionBuffer] = '\0';
				std::cout << temp << "\n";
				positionBuffer = 0;
			}
			break;
		case LEXYC_TYPE::lID:
			if (IsNumber(text[i]) || IsLetter(text[i]))
			{
				positionBuffer++;
			}
			else
			{
				i--;
				temp[positionBuffer] = '\0';
				std::cout << temp << "\n";
				positionBuffer = 0;
				state = LEXYC_TYPE::lNONE;
			}
			break;
		default:
			break;
		}

	}
}
int main()
{
	while (true)
	{
		std::string mystr;
		std::cout << "Introduce texto\n";
		getline(std::cin, mystr);
		GetLex(mystr);
	}
	

	return 0;
}

