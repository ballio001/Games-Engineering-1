// Games_Engineering_1.cpp : Defines the entry point for the console application.
// made by: Onur Balli
//

#include <iostream>
#include <iomanip>
#include <string.h>
#include "stdafx.h"

// Abstract Factory
#include "Character.h"
#include "Factory.h"
#include "Enemies.h"
#include "SimpleFactory.h"
#include "Player.h"

 // Bridge Pattern
#include "HandleCivilian.h"
#include "Civilian.h"

 // Proxy
#include "Image.h"
#include "RealImage.h"

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

	cout << "- --- Abstract Factory Output --- -\n" << endl;

	for (int i = 0; i < 5; i++) {
		characters[i]->draw();
	}
	cout << "_______________________________________________\n" << endl;

	cout << "- --- Bridge Pattern Output --- -\n" << endl;

	HandleCivilian handle;
	handle->Draw();

	cout << "_______________________________________________\n" << endl;

	cout << "- --- Proxy Output --- -\n" << endl;

	Image images[5];

	for (int i; true;)
	{
		cout << "Exit[0], Image[1-5]: ";
		cin >> i;
		if (i == 0)
			break;
		images[i - 1].draw();
	}

	cout << "_______________________________________________\n" << endl;
}

