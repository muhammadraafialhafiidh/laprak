#include <iostream>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    float ipk;
};
int main()
{
    Mahasiswa mhs1;

    mhs1.nama = "Raafi";
    mhs1.nim = "2311102030";
    mhs1.ipk = 4;

    cout << "Nama: " << mhs1.nama << endl;
    cout << "NIM: " << mhs1.nim << endl;
    cout << "IPK: " << mhs1.ipk << endl;
    
    return 0;
}