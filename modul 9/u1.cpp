#include <iostream>
#include <iomanip>
using namespace std;
string simpul[10];
int busur[10][10];
void inputSimpul(int length)
{
    cout << "Silahkan masukkan nama simpul : " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> simpul[i];
    }
}
void inputBusur(int length)
{
    cout << "Silahkan masukan bobot antara simpul: " << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << simpul[i] << " ==> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }
}
void tampilGrph(int length)
{
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << " \t" << simpul[i];
    }
    cout << endl;
    for (int baris = 0; baris < length; baris++)
    {
        cout << simpul[baris] << "\t";
        for (int kolom = 0; kolom < length; kolom++)
        {
            cout << busur[baris][kolom] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int length;
    cout << "Silahkan masukkan jumlah simpul : ";
    cin >> length;
    inputSimpul(length);
    inputBusur(length);
    tampilGrph(length);
    return 0;
}
