#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int k = 7;

	auto p = l.begin();
	auto q = l.begin();

	while (k != 0)
	{
		k--;
		p++;
	}

	while (p != l.end())
	{
		p++;
		q++;
	}

	cout << *q << endl;

	system("pause");
}