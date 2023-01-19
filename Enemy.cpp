#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Access,
	&Enemy::Attack,
	&Enemy::Pullout,
};

void Enemy::Access()
{
	printf("�ߐ�\n");
}

void Enemy::Attack()
{
	printf("�U��\n");
}

void Enemy::Pullout()
{
	printf("�P��\n");
}

void Enemy::Action()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTable[i])();
		Sleep(1000);
	}
}