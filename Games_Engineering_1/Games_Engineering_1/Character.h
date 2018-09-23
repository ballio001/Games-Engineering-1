#pragma once
#include <iostream>

class Character
{
public:
	Character() {
		id_ = total_++;
	}
	virtual void draw() = 0;
protected:
	int id_;
	static int total_;
	Character();
	~Character();
};
int Character::total_ = 0;
