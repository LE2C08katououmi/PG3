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
	// int�^�̒l���r
	int x = 10;
	int y = 20;

	cout << "x" << x << "��y:" << y << "���r" << endl;
	auto a = max(x, y);
	cout << "�傫���l��" << a << endl;
	cout << "a�̌^ : " << typeid(a).name() << endl;

	// float�^�̒l���r
	float z = 12.3f;
	float w = 45.6f;

	cout << "z" << z << "��w:" << w << "���r" << endl;
	auto b = max(z, w);
	cout << "�傫���l��" << b << endl;
	cout << "b�̌^ : " << typeid(b).name() << endl;

	return 0;
}