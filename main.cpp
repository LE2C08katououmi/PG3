#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

typedef void (*PFunc)(int*);

int odice;
int dice;
int cdice;

void callback1(int* s)
{
	if (cdice == 1 && dice == 1)
	{
		printf("���� dice��%d",odice);
	}
	else if (cdice == 2 && dice == 0)
	{
		printf("���� dice��%d",odice);
	}
	else
	{
		printf("�s���� dice��%d",odice);
	}
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);

	p(&second);
}

int main()
{
	srand(time(nullptr));
	dice = rand() % 6 + 1;
	odice = dice;

	printf("��Ȃ�1�A�����Ȃ�2:");

	while (dice > 1)
	{
		dice = dice % 2;

		break;
	}

	scanf_s("%d", &cdice);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	return 0;
}