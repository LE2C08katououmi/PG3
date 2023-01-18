#include "test.h"
#include <stdio.h>

TestSingleton::TestSingleton() {}
TestSingleton::~TestSingleton() {}

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;

	return &instance;
}

int TestSingleton::memberFunc()
{
	int a = 3;
	int b = 4;
	int c = a + b;

	return printf("%d",c);
}