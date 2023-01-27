#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

#include "Shape.h"

using namespace std;

int main()
{
	IShape* shape = new IShape;

	shape->Draw();

	return 0;
}