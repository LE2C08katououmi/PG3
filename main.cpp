#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>Station = { " ","_c ","Ht΄ ","δk¬ ","γμ ","ιςJ ",
								"ϊι’ ","c[ ","ξ "," ","εΛ " ,"rά ",
								"Ϊ ","cnκ ","VεvΫ ","Vh ","γXΨ ",
								"΄h ","aJ ","bδυ ","Ϊ ","ά½c ","εθ ",
								"iμ ","c¬ ","lΌ¬ ","V΄ ","Ly¬\n\n" };

	cout << "1970N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}
	
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "c[ ")
		{
			itr = Station.insert(itr, "Όϊι’ ");
			itr++;
		}
	}

	cout << "2019N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "c¬ ")
		{
			itr = Station.insert(itr, "ΦQ[gEFC ");
			itr++;
		}
	}

	cout << "2022N\n";

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s", *itr);
	}

	return 0;
}