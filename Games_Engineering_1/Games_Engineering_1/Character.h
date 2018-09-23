#pragma once
#include <iostream>

class Character
{
public:
	Character() {
	}
	virtual void draw() = 0;
protected:
	int id_;
};
