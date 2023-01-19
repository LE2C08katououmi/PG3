#pragma once

#include <stdio.h>
#include <Windows.h>

class Enemy
{
public:
	void Access();
	void Attack();
	void Pullout();

	void Action();

private:
	static void (Enemy::* spFuncTable[])();
};