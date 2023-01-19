#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

#include "Enemy.h"

using namespace std;

int main()
{
	Enemy* enemy = new Enemy;

	enemy->Action();

	return 0;
}