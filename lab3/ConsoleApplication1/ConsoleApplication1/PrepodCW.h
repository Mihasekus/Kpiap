#pragma once
#include "Human.h"
#include "ComissionWorker.h"
#include "prepod.h"

class PrepodCW :
	protected ComissionWorker,
	public Prepod

{
public:
	PrepodCW();
	~PrepodCW();
	void Input();
	void Output();
private:
	char _works[MAX_LENGTH];
};


