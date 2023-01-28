#pragma once

#include <stdio.h>
#include "Shape.h"

class Rectangle:public IShape
{
public:
	void size() override;

	void draw() override;

private:
	int x = 3;
	int y = 3;

	int answer = 0;
};