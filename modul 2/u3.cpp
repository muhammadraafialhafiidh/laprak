#include <iostream>
using namespace std;
int main()
{
    int maks, min, a;
    float avg, sum = 0;
    cout << "Masukkan panjang array : ";
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Array ke-" << i << " : ";
        cin >> array[i];
        // Mencari nilai maksimum
        if (i == 0 || array[i] > maks)
        {
            maks = array[i];
        }
        // Mencari nilai minimum
        if (i == 0 || array[i] < min)
        {
            min = array[i];
        }
        // Nilai rata-rata
        sum += array[i];
    }
    int pilih;
    string lagi;
    do
    {
        cout << "\nMenu : \n";
        cout << "1. Nilai maksimum\n";
        cout << "2. Nilai minimum\n";
        cout << "3. Nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
        {
            cout << "Nilai maksimum adalah " << maks << "\n";
            break;
        }
        case 2:
        {
            cout << "Nilai minimum adalah " << min << "\n";
            break;
        }
        case 3:
        {
            avg = sum / a;
            cout << "Nilai rata-rata adalah " << avg << "\n";
            break;
        }
        default:
        {
            return 0;
        }
        }
        cout << "ingin menghitung lagi? (ya/tidak): ";
        cin >> lagi;
    } while (lagi == "ya" || lagi == "Ya");
    cout << endl;
    cout << "Terimaksih" << endl;
}