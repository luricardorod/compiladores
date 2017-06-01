#pragma once
#include "CState.h"
class CNumberInt :
	public CState
{
public:
	virtual int Evaluate(char character);
	virtual int Enter(char character);
	virtual void Exit();
	CNumberInt();
	~CNumberInt();
};

