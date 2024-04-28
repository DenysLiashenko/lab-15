#include "Functions.h"
#include <iostream>
using namespace std;

void SortSelection(int* p1, int array_size)
{
	int min = 0, temp, i;
	for (i = 0; i < array_size; i++)
	{
		min = i;
		for (int j = i + 1; j < array_size; j++)
			min = (p1[j] < p1[min]) ? j : min;
		if (i != min)
		{
			temp = p1[i];
			p1[i] = p1[min];
			p1[min] = temp;
		}
	}

	cout << endl << "You sorted array(by Selection): ";
	for (i = 0; i < array_size; i++)
	{
		cout << p1[i] << " ";
	}
	cout << endl;
}

void SortingByInsertion(int* p1, int array_size)
{
	int buff = 0;
	int i, j;
	for (i = 1; i < array_size; i++)
	{
		buff = p1[i];
		for (j = i - 1; j >= 0 && p1[j] > buff; j--)
			p1[j + 1] = p1[j];
		p1[j + 1] = buff; 
	}

	cout << endl << "You sorted array(By insertion): ";
	for (i = 0; i < array_size; i++)
	{
		cout << p1[i] << " ";
	}
	cout << endl;
}