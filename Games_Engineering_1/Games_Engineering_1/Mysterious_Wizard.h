#pragma once
#include <iostream>
#include "Character.h"

using namespace std;

class Mysterious_Wizard : public Character {
public:
	void draw() {
		cout << "draw: " << id_ << " :Mysterious_Wizard" << endl;
	}
};