#include<stdio.h>

int Recursive(int n)
{
	if (n <= 1)
	{
		return(100);
	}

	return Recursive(n - 1) * 2 - 50;
}

int main()
{
	int n = 5;
	int result;

	result = Recursive(n);
	printf("%dŽžŠÔ“­‚¢‚½ê‡‚ÌŽž‹‹‚Í%d\n", n, result);

	return 0;
}