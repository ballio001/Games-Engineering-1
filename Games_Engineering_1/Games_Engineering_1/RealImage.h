#pragma once
#include <iostream>

using namespace std;

class RealImage
{
	int m_id;

public:
	RealImage(int i)
	{
		m_id = i;
		cout << "   Ctor: " << m_id << '\n'; //Constructor, initializing 
	}
	~RealImage()
	{
		cout << "   Destroyed Image: " << m_id << '\n'; //Destructor, automatically invoked when the object is destroyed
	}
	void draw()
	{
		cout << "   drawing image " << m_id << '\n'; 
	}
};