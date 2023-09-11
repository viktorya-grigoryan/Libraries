// StaticLib1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "StaticLib1.hpp"

// TODO: Это пример библиотечной функции.
void sort(int a[], int n)
{
	int b;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
}
