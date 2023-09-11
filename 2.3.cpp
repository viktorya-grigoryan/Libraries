#include <Windows.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
typedef void (*dllFun)(int[], int);
int main()
{
    int n;
    cout << "Vvedite kol-vo elementov massiva: " ;
    cin >> n;
    int* a = new int[n];
    srand(time(nullptr));
    cout << "Massiv:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20;
        cout << a[i] << " ";
    }
    cout << endl;
      
    HINSTANCE hinstLib;
    dllFun procAdd;

    hinstLib = LoadLibrary(TEXT("DynamicLib1.dll"));
    procAdd = (dllFun)GetProcAddress(hinstLib, "sort");

    procAdd(a, n);

    cout << "Otsortirovanniy massiv:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    FreeLibrary(hinstLib);
    delete[] a;
}
