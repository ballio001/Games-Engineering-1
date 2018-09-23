#pragma once
#include <iostream>
#include "Character.h"

using namespace std;

class Spider : public Character {
public:
	void draw() {
		cout << "draw: " << id_ << " :Spider" << endl;
	}
};