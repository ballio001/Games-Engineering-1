#pragma once
#include <iostream>
#include "Factory.h"
#include "Character.h"
#include "wolf.h"
#include "Mysterious_Wizard.h"
#include "Spider.h"

class Enemies : public Factory {

public:

	Character* createShopInstance() {
		return new Spider;
	}
	Character* createRandomEventInstance() {
		return new Wolf;
	}
	Character* createPlayerInstance() {
		return 0;
	}

	Enemies();
	~Enemies();

};

