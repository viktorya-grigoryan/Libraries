#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "C:/Users/vikel/source/repos/StaticLib1/StaticLib1.hpp"

using namespace std;

int main()
{
    cout << "Vvedite kol-vo elementov massiva: ";
    srand(time(nullptr));
    int n;
    cin >> n;
    int *a = new int [n];
    cout<<endl << "Massiv:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20;
        cout << a[i]<<" ";
    }
    cout << endl << "Otsortirovanniy massiv:" << endl;
    sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;

}

