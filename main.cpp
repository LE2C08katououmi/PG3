#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>Station = { "東京 ","神田 ","秋葉原 ","御徒町 ","上野 ","鶯谷 ",
								"日暮里 ","田端 ","駒込 ","巣鴨 ","大塚 " ,"池袋 ",
								"目白 ","高田馬場 ","新大久保 ","新宿 ","代々木 ",
								"原宿 ","渋谷 ","恵比寿 ","目黒 ","五反田 ","大崎 ",
								"品川 ","田町 ","浜松町 ","新橋 ","有楽町\n\n" };

	cout << "1970年\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "田端 ") == 0)
		{
			itr = Station.insert(itr, "西日暮里 ");
			itr++;
		}
	}

	cout << "2019年\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "田町 ") == 0)
		{
			itr = Station.insert(itr, "高輪ゲートウェイ ");
			itr++;
		}
	}

	cout << "2022年\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	return 0;
}