#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>Station = { "���� ","�_�c ","�H�t�� ","��k�� ","��� ","��J ",
								"���闢 ","�c�[ ","� ","���� ","��� " ,"�r�� ",
								"�ڔ� ","���c�n�� ","�V��v�� ","�V�h ","��X�� ",
								"���h ","�a�J ","�b��� ","�ڍ� ","�ܔ��c ","��� ",
								"�i�� ","�c�� ","�l���� ","�V�� ","�L�y��\n\n" };

	cout << "1970�N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "�c�[ ") == 0)
		{
			itr = Station.insert(itr, "�����闢 ");
			itr++;
		}
	}

	cout << "2019�N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "�c�� ") == 0)
		{
			itr = Station.insert(itr, "���փQ�[�g�E�F�C ");
			itr++;
		}
	}

	cout << "2022�N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	return 0;
}