#pragma once

#define LENGTH 10

class Human
{
public:
	Human();
	~Human();
	virtual void Input();
	virtual void Output();
private:
	char _name[LENGTH];
	char _surname[2*LENGTH];
	char _patronymic[2*LENGTH];
	int _birthYear;

};

