#include "Shape.h"

void IShape::size()
{
	circleA = circleX * circleX * 3.14f;
}

void IShape::Draw()
{
	printf("�ʐρ�%f", circleA);
}