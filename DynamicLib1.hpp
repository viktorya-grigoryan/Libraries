#pragma once

#include <iostream>


#ifdef EXPORT_LIB
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllexport)
#endif

extern "C" LIB_API void sort(int a[], int n);