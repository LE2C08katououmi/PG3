#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Access,
	&Enemy::Attack,
	&Enemy::Pullout,
};

void Enemy::Access()
{
	printf("‹ßÚ\n");
}

void Enemy::Attack()
{
	printf("UŒ‚\n");
}

void Enemy::Pullout()
{
	printf("“P‘Ş\n");
}

void Enemy::Action()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTable[i])();
		Sleep(1000);
	}
}