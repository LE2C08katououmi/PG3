#include<stdio.h>

int Recursive(int n)
{
	if (n <= 1)
	{
		return(1);
	}

	return Recursive(n - 1);
}

int main()
{
	int n = 5;
	int result;

	result = Recursive(n);
	printf("%d時間働いた場合の時給は%d\n", n, result);

	return 0;
}