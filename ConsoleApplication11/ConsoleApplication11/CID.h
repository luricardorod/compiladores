#pragma once
#include "CState.h"
class CID :
	public CState
{
public:
	virtual int Evaluate(char character);
	virtual int Enter(char character);
	virtual void Exit();
	CID();
	~CID();
};

