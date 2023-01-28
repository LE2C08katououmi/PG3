#pragma once

#include <stdio.h>
#include "Shape.h"

class Circle :public IShape
{
public:
	void size() override;

	void draw() override;

public:
	int r = 3;
	float pai = 3.14f;

	float answer = 0;
};

