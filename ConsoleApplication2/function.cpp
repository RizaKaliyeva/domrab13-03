#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>

using namespace std;

void create(int *arr, int r, int start, int end)
{

	for (int i = 0; i < r; i++)
	{
		arr[i] = start + rand() % end;
		cout << arr[i] << "\t";
	}
	cout << endl;
}