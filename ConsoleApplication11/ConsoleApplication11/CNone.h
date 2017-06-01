#pragma once
#include "CState.h"
class CNone :
	public CState
{
public:
	virtual int Evaluate(char character);
	virtual int Enter(char character);
	virtual void Exit();
	CNone();
	~CNone();
};

