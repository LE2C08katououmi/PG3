#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>Station = { "Tokyo ","Kanda ","Akihabara ","Okachimachi ","Ueno ","Uguisudani ",
								"Nippori ","Tabata ","Komagome ","Sugamo ","Otsuka " ,"Ikebukuro ",
								"Mejiro ","Takadanobaba ","Shin-Okubo ","Shinjuku ","Yoyogi ",
								"Harajuku ","Shibuya ","Ebisu ","Meguro ","Gotanda ","Osaki ",
								"Shinagawa ","Tamachi ","Hamamatsucho ","Shimbashi ","Yurakucho\n\n" };

	cout << "1970”N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "Tabata ") == 0)
		{
			itr = Station.insert(itr, "Nishi-Nippori ");
			itr++;
		}
	}

	cout << "2019”N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "Tamachi ") == 0)
		{
			itr = Station.insert(itr, "Takanawa Gateway ");
			itr++;
		}
	}

	cout << "2022”N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	return 0;
}