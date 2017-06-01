#include "stdafx.h"
#include "CNone.h"


int CNone::Evaluate(char character)
{
	if (character == 13 || character == 32)
	{
		return LEXIC_STATES::lNONE;
	}
	else if (IsLetter(character) || Is_(character))
	{
		return LEXIC_STATES::lID;
	}
	else if (IsNumber(character))
	{
		return LEXIC_STATES::lNUMBERINT;
	}
	else
	{
		//error caracteres invalidos
	}
	return 0;
}

int CNone::Enter(char character)
{
	return LEXIC_STATES::lNONE;
}

void CNone::Exit()
{
}

CNone::CNone()
{
}


CNone::~CNone()
{
}
