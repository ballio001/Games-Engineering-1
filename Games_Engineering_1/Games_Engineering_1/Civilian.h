#pragma once
#include <iostream>

using namespace std;

class Civilian{
public:
	Civilian() { }
	void Draw() {
		cout << "Spawning Civilians" << endl;
	}
};