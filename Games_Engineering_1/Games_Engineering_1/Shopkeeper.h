#pragma once
#include <iostream>
#include "Character.h"

using namespace std;

class Shopkeeper : public Character {
public:
	void draw() {
		cout << "circle " << id_ << ": draw" << endl;
	}
};