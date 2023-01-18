#include "MyClass.h"

void (MyClass::* spFuncTable[])() = {
	&MyClass::Func1,
	&MyClass::Func2,
};