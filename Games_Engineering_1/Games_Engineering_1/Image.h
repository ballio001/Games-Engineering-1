#pragma once
#include <iostream>

#include "RealImage.h"

using namespace std;

//wrapper class
class Image
{
	// The wrapper class holds a pointer to the real class
	RealImage *m_the_real_thing;
	int m_id;
	static int s_next;
public:
	Image()
	{
		m_id = s_next++;
		// Initialized to null
		m_the_real_thing = 0;
	}
	~Image()
	{
		delete m_the_real_thing;
	}

	//if the number 7 is typed in there is some sort of -33765 number without an error
	void draw()
	{
		/* When a request comes in, the real object is
		   created "on first use" */
		if (!m_the_real_thing)
			m_the_real_thing = new RealImage(m_id);
		// The request is always delegated
		m_the_real_thing->draw();
	}
};
int Image::s_next = 1;