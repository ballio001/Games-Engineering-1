// Games_Engineering_1.cpp : Defines the entry point for the console application.
// made by: Onur Balli
//

#include "stdafx.h"
#include "Character.h"
#include "Factory.h"
#include "Enemies.h"
#include "SimpleFactory.h"
#include "Player.h"
#include <iostream>


int main()
{
	Factory* Enemyfactory = new Enemies;
	Factory* factory = new SimpleFactory;

	Character* characters[5];

	characters[0] = factory->createShopInstance();   // characters[0] = new Ellipse;
	characters[1] = factory->createRandomEventInstance(); // characters[1] = new Rectangle;
	characters[2] = Enemyfactory->createShopInstance();   // characters[2] = new Ellipse;
	characters[3] = Enemyfactory->createRandomEventInstance(); // characters[1] = new Rectangle;
	characters[4] = factory->createPlayerInstance(); // characters[1] = new Rectangle;

	for (int i = 0; i < 5; i++) {
		characters[i]->draw();
	}
}

