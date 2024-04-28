#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	int x, i = 1, k = 0, q, w;
	cout << "Print you number: ";
	cin >> x;

	while (x % i != x)
	{
		k++;
		i = i * 10;
	}

	int* p = new int[k];

	w = k - 1;
	for (i = 0; i < k; i++)
	{
		q = pow(10, i);
		p[w] = (x / (q)) % (10);
		w--;
	}

	cout << endl << "You array: ";
	for (i = 0; i < k; i++)
	{
		cout << p[i] << " ";
	}

	cout << endl;

	SortSelection(p, k);
	SortingByInsertion(p, k);
}