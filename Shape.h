#pragma once

#include <stdio.h>

class IShape
{
public:
	void size();

	void Draw();

private:
	//�~�̔��a
	float circleX = 5.0f;
	//�~�̖ʐ�
	float circleA;
};

