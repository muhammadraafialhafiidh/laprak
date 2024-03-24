#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Masukkan ukuran array : \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    int arr[a][b][c];
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
        cout << endl;
    }
    // Tampilan Hasil Array
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}