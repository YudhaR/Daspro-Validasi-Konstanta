/*
    Program Validasi
    Ket : Program untuk cek bilangan > x
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;
    const int x = 10;

    //Algoritma
    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if (bilangan > x)
    {
        cout << bilangan << " adalah bilangan > " << x << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
