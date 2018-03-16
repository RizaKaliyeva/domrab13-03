#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header1.h"


using namespace std;

void main()
{
	setlocale(LC_ALL, ("Rus"));
	srand(time(NULL));
	int nz;
	do
	{
		printf("Vvedite nomer zadaniya?");
		scanf("%d", &nz);
		if (nz == 1)
		{
			/*1.	Ввести вещественные числа.Создать массив из этих чисел, 
				пока не встретится число 10.
				Вычислить сумму отрицательных элементов массива*/
			int * arr, k, sum = 0;
			cout << "Vvedite kol-vo" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, -10, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] < 0)
					sum += arr[i];
			}
			cout << "Summa otr-yh elementov = " << sum << endl;
		}
		else if (nz == 2)
		{
		/*	2.	Ввести в StringGrid массив из 10 целых чисел.Создать два новых массива
				– из положительных и отрицательных элементов исходного массива.
				Определить суммы элементов каждого массива.*/
			int arr[10], arr2[10], arr3[10], sum = 0, sum2 = 0;
			create(arr, 10, -10, 20);
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] < 0)
				{
					arr2[i] = arr[i];
					sum += arr[i];
				}
				if (arr[i] > 0)
				{
					arr3[i] = arr[i];
					sum2 += arr[i];
				}
			}
			cout << sum << "  -  " << sum2 << endl;

		}
		else if (nz == 3)
		{
			/*3.	Ввести массив из 9 вещественных чисел.
				Создать новый массив из элементов исходного,
				которые по модулю больше 10. Вычислить среднее 
				арифметическое элементов нового массива*/
			int arr[9], arr2[9], sum = 0, count = 0;
			create(arr, 9, 0, 40);
			for (int i = 0; i < 9; i++)
			{
				if (arr[i] > 10)
				{
					arr2[i] = arr[i];
					sum += arr[i];
					count++;
				}
			}
			cout << "Srednee arif = " << sum / count << endl;
		}
		else if (nz == 4)
		{
			/*4.	Ввести вещественные числа.
				Создать массив из положительных чисел.Определить, 
				является ли массив упорядоченным по возрастанию.*/
			int arr[10];
			create(arr, 10, 0, 50);
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] < arr[i + 1])
					cout << "Massiv uporyadochen po vozrastaniyu" << endl;
				else
					cout << "Massiv ne uporyadochen po vozrastaniyu" << endl;
			}
		}
		else if (nz == 5)
		{
			/*6.	Ввести массив из 15 вещественных чисел.
				Создать новый массив из элементов исходного,
				в который не включать элементы, попадающие в промежуток(-3, 7).
				Определить произведение отрицательных элементов нового массива*/
			int arr[15], arr2[15], pr = 1, count = 0;
			create(arr, 15, -10, 30);
			for (int i = 0; i < 15; i++)
			{
				if (arr[i]<7 && arr[i]>-3)
				{
					arr2[i] = arr[i];
					count++;
				}
			}
			for (int i = 0; i < count; i++)
			{
				if (arr2[i] < 0)
					pr *= arr2[i];
			}
			cout << pr << endl;

		}
		else if (nz == 6)
		{
			/*7.	Ввести целые числа.Создать массив из чисел, которые не делятся на 5.
				Определить минимальный элемент массива.*/
			int arr[10], arr2[10], min = 0, count = 0;
			create(arr, 10, 0, 50);
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] % 5 != 0)
				{
					arr2[i] = arr[i];
					count++;
				}
			}
			for (int i = 0; i < count; i++)
			{
				if (arr2[i] < min)
					min = arr2[i];
			}
			cout << "Min = " << min<< endl;
		}
		else if (nz == 7)
		{
			/*10.	Ввести вещественные числа.Создать массив из чисел,
				которые попадают в интервал[2, 13].Определить, есть
				ли в массиве числа, большие 10.*/
			int arr[15], arr2[15], count = 0;
			create(arr, 15, -10, 30);
			for (int i = 0; i < 15; i++)
			{
				if (arr[i]>2 && arr[i]<13)
				{
					arr2[i] = arr[i];
					count++;
				}
			}
			for (int i = 0; i < count; i++)
			{
				if (arr2[i] < 10)
					cout << "Est' chisla bol'she 10" << endl;
			}
			
		}
	} while (nz == 999);
}