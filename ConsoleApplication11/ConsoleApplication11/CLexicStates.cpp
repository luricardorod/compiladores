#include "stdafx.h"
#include "CLexicStates.h"


std::string CLexicStates::Compile(std::string * file)
{
	for (int i = 0; i < file->length(); i++)
	{
		int previousState = m_iActiveState;
		m_iActiveState = m_States[m_iActiveState].Evaluate((*file)[i]);
		if (previousState != m_iActiveState)
		{
			m_States[previousState].Exit();
			m_iActiveState = m_States[m_iActiveState].Enter((*file)[i]);
		}
	}
	/*for (int i = 0; i < text.length(); i++)
	{
		temp[positionBuffer] = text[i];
		switch (state)
		{
		case LEXYC_TYPE::lNONE:
			if (text[i] == 13 || text[i] == 32)
			{
				positionBuffer = 0;
			}
			else if (IsLetter(text[i]) || text[i] == '_')
			{
				positionBuffer++;
				state = LEXYC_TYPE::lID;
			}
			else if (IsNumber(text[i]))
			{
				positionBuffer++;
				state = LEXYC_TYPE::lNUMBERINT;
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
			if (IsNumber(text[i]) || IsLetter(text[i]) || text[i] == '_')
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
		case LEXYC_TYPE::lNUMBERINT:
			if (IsNumber(text[i]))
			{
				positionBuffer++;
			}
			else if (text[i] == '.')
			{
				positionBuffer++;
				state = LEXYC_TYPE::lNUMBERFLOAT;
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
		case LEXYC_TYPE::lNUMBERFLOAT:
			if (IsNumber(text[i]))
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
		if (i == text.length() - 1 && state != LEXYC_TYPE::lNONE)
		{
			temp[positionBuffer] = '\0';
			std::cout << temp << "\n";
		}
	}*/
	return std::string();
}

CLexicStates::CLexicStates()
{
	m_iActiveState = 0;
}


CLexicStates::~CLexicStates()
{
}
