#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

int main()
{
	IShape* shape[2];

	shape[0] = new Circle;
	shape[1] = new Rectangle;

	shape[0]->size();
	shape[0]->draw();

	shape[1]->size();
	shape[1]->draw();

	delete shape[0];
	delete shape[1];

	return 0;
}