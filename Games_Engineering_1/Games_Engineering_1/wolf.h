#pragma once
#include <iostream>
#include "Character.h"

using namespace std;

class Wolf : public Character {
public:
	void draw() {
		cout << "draw: " << id_ << " :Wolf" << endl;
	}
};