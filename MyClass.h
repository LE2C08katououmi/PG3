#pragma once
class MyClass
{
public:
	void Func1();
	void Func2();
private:
	static void (MyClass::* spFuncTable[])();
};