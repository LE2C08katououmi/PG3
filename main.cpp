#include <stdlib.h>
#include <list>
using namespace std;

int main()
{
	list<int> lst(33, 4);
	list<int>::iterator itr;

	itr = lst.begin();
	itr = lst.end();
	itr--;
	itr--;

	return 0;
}