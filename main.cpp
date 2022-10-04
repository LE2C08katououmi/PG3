#include<stdio.h>

template<typename T>
T Min(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template<>
char Min<char>(char a, char b)
{
	return printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
}

int main()
{
	printf("%d\n", Min<int>(500, 100));
	printf("%f\n", Min<float>(50.0f, 10.0f));
	printf("%lf\n",Min<double>(50, 100));
	Min<char>(0, 0);

	return 0;
}