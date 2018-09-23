#pragma once
#include <iostream>
#include "Factory.h"
#include "Character.h"
#include "Shopkeeper.h"
#include "Player.h"
#include "Mysterious_Wizard.h"

class SimpleFactory : public Factory {

public:

	Character* createShopInstance() {
		return new Shopkeeper;
	}
	Character* createRandomEventInstance() {
		return new Mysterious_Wizard;
	}
	Character* createPlayerInstance() {
		return new Player;
	}

	SimpleFactory();
	~SimpleFactory();

};

