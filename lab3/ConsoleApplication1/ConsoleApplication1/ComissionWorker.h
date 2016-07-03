#pragma once
#include "human.h"
#define MAX_LENGTH 40
#include <string>
#include <list>


class ComissionWorker :
	virtual public Human
{
public:
	virtual void Input();
	virtual void Output();
	ComissionWorker();
	~ComissionWorker();
protected:
	char _comissionName[MAX_LENGTH];
	int _comissionYear;
	int _personalNum;
	char _autobiography[40*MAX_LENGTH];

};

