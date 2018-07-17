// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


int main()
{

	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n;

	do
	{
		cout << "n = ";
		cin >> n;
		cout << endl;

		if (n == 1) {
			cout << "Написать программу, которая заменяет все нули в двухмерном массиве на -1.\n\n";

			int a[5][5];
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = rand() % 2;
					cout << right << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (a[i][j] == 0) a[i][j] = -1;
					cout << right << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (n == 2) {
			cout << "Создайте двухмерный массив. Заполните его случайными числами и покажите на экран. Пользователь выбирает количество сдвигов.\n\n";

			int a[2][6];
			int b[2][6];

			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] = rand() % 11;
					cout << right << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;
			int k;

			cout << "количество элементов для сдвига = ";
			cin >> k;		

			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if ((j + k) < 6)
					{
						b[i][j + k] = a[i][j];
					}
					else
					{
						b[i][abs(6 - j - k)] = a[i][j];
					}
				}
			}

			cout << endl;

			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					cout << right << setw(5) << b[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (n == 3) {
			cout << "Создайте двухмерный массив. Заполните его случайными числами и покажите на экран. Выполните сортировку элементов в каждой строке массива. Полученный результат покажите на экран\n\n";
			
			int a[5][5];

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = rand() % 11;
					cout << right << setw(5) << a[i][j];
				}
				cout << endl;
			}

			cout << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int pass = 0; pass < 5; pass++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (a[i][j] > a[i][j + 1])
						{
							swap(a[i][j], a[i][j + 1]);
						}

					}
				}
			}


			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					cout << right << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
	


	} while (true);
	return 0;
}

