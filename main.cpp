#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

#include "student.h"

using namespace std;

int Student::studentCount;

int main()
{
	Student* student1 = new Student;
	Student* student2 = new Student;
	Student* student3 = new Student;

	cout << Student::studentCount << endl;

	delete student1;

	cout << Student::studentCount << endl;
	delete student2;
	delete student3;
	cout << Student::studentCount << endl;

	return 0;
}