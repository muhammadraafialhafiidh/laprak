#include <iostream>

using namespace std;

int tambah(int a, int b)
{
    return a + b;
}
double bagi(double a, double b)
{
    return a / b;
}
bool isGenap(int a)
{
    return a % 2 == 0;
}

int main()
{
    int angka1, angka2;
    double pecahan1, pecahan2;

    cout << "Masukkan bilangan bulat 1: ";
    cin >> angka1;
    cout << "Masukkan bilangan bulat 2: ";
    cin >> angka2;

    cout << "Masukkan bilangan pecahan 1: ";
    cin >> pecahan1;
    cout << "Masukkan bilangan pecahan 2: ";
    cin >> pecahan2;

    int hasilTambah = tambah(angka1, angka2);
    double hasilBagi = bagi(pecahan1, pecahan2);
    bool apakahGenap = isGenap(angka1);

    cout << "\nHasil Tambah: " << hasilTambah << endl;
    cout << "Hasil Bagi: " << hasilBagi << endl;
    cout << "Apakah " << angka1 << " genap? " << apakahGenap << endl;
    return 0;
}