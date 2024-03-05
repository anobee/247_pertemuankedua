// pertemuan kedua.cpp : Defines the entry point for the application.
//

#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    cout << "niai awal : " << bilangan << endl;

    if (bilangan >= 5)

    {
        bilangan = 2 * bilangan;
    }

    cout << "nilai sekarang = " << bilangan << endl;
}

