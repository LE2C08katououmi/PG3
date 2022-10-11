#include<stdio.h>

void drawImage(int x, int y)
{
	printf("‰æ‘œ‚ğ•`‰æ x:%d y:%d\n", x, y);
}

void drawImage(int x, int y,int z)
{
	printf("}Œ`‚ğ•`‰æ x:%d y:%d z:%d\n", x, y, z);
}

int main()
{
	int x = 10;
	int y = 20;
	int z = 30;
	drawImage(x, y);

	x = 1;
	y = 2;
	z = 3;
	drawImage(x, y, z);
}