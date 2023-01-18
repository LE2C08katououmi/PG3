#pragma once

class TestSingleton {
private:
	TestSingleton();
	~TestSingleton();
public:
	TestSingleton(const TestSingleton& obj) = delete;
	TestSingleton& operator=(const TestSingleton& obj) = delete;
	static TestSingleton* GetInstance();
	int memberFunc();
};