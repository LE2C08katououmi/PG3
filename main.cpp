#include<stdio.h>
#include<typeinfo>
#include<iostream>
using namespace std;

template <typename Type>

Type comparison(Type a, Type b) 
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

int main()
{
	// intŒ^‚Ì’l‚ğ”äŠr
	int x = 10;
	int y = 20;

	cout << "x" << x << "‚Æy:" << y << "‚ğ”äŠr" << endl;
	auto a = max(x, y);
	cout << "‘å‚«‚¢’l‚Í" << a << endl;
	cout << "a‚ÌŒ^ : " << typeid(a).name() << endl;

	// floatŒ^‚Ì’l‚ğ”äŠr
	float z = 12.3f;
	float w = 45.6f;

	cout << "z" << z << "‚Æw:" << w << "‚ğ”äŠr" << endl;
	auto b = max(z, w);
	cout << "‘å‚«‚¢’l‚Í" << b << endl;
	cout << "b‚ÌŒ^ : " << typeid(b).name() << endl;

	return 0;
}