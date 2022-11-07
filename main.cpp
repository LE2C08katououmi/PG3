#include<stdio.h>
#include<Windows.h>
#include<functional>
#include<random>

std::random_device rnd;
std::mt19937 mt(rnd());
std::uniform_int_distribution<int> randDice(1, 6);

int main(int arge, const char* argv[])
{
	int dice = randDice(mt);
	int num;

	std::function<int()> diceNum = [&]() {return dice; };

	std::function<int(int)> cNum = [](int diceNum)
	{
		if (diceNum % 2 == 0)
		{
			return 0;
		}
		else if (diceNum % 2 == 1)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	};

	printf("��Ȃ�1�A�����Ȃ�0����͂��Ă�������:");
	scanf_s("%d", &num);

	auto print = [&](int cNum)
	{
		Sleep(3 * 1000);

		if (cNum == 0 && num == 0)
		{
			printf("���� �o���ڂ�%d", dice);
		}
		else if (cNum == 1 && num == 1)
		{
			printf("���� �o���ڂ�%d",dice);
		}
		else
		{
			printf("�s���� �o���ڂ�%d", dice);
		}
	};

	print(cNum(diceNum()));

	return 0;
}