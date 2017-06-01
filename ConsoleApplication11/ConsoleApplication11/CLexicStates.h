#pragma once
#include <string>
#include <vector>
#include "CState.h"

class CLexicStates
{
public:
	std::string Compile(std::string* file);
	std::vector<CState> m_States;
	int m_iActiveState;
	CLexicStates();
	~CLexicStates();
};

