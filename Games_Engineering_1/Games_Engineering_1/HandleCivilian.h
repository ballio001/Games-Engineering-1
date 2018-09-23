#pragma once
#include <iostream>
#include "Civilian.h"

using namespace std;

class HandleCivilian {
public:
	HandleCivilian() : civilian(new Civilian()) {

	}
	Civilian* operator->() {
		return civilian;
	}
private:
	Civilian * civilian;
};