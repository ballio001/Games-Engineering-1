#pragma once
#include <iostream>
#include "Character.h"

class Factory
{
public:
	virtual Character* createShopInstance() = 0;
	virtual Character* createPlayerInstance() = 0;
	virtual Character* createRandomEventInstance() = 0; 

	Factory();
	~Factory();
};

