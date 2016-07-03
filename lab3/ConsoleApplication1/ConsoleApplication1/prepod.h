#pragma once
#include "human.h"
#include <string>
#include <list>

#define MAX_LENGTH 40

class Prepod :
	virtual public Human
{
public:
	Prepod();
	~Prepod();
	virtual void Input();
	void Output();
private:
	char _rank[MAX_LENGTH] ;
	char _degree[MAX_LENGTH];
	char _speciality[MAX_LENGTH];
	char _SciWorks[10*MAX_LENGTH];

	   
};

	/*int _stringAmount;
	list<string> _text;*/