#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Masukkan panjang array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> array[i];
    }
    cout << "\n";
    cout << "Data Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n\n";
    cout << "Data Genap : ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << ", ";
        }
    }
    cout << "\n\n";
    cout
        << "Data Ganjil : ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            cout << array[i] << ", ";
        }
    }
    cout << "\n\n";
}