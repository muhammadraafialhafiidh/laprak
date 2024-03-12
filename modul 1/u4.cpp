#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // membuat map untuk menyimpan umur berdasarkan nama
    map<string, int> umur;

    // mengisi map dengan data umur
    umur["Asep"] = 20;
    umur["Budi"] = 25;
    umur["Jaenal"] = 30;
    
    // menampilkan umur berdasarkan nama
    cout << "Umur Asep: " << umur["Asep"] << endl;
    cout << "Umur Budi: " << umur["Budi"] << endl;
    cout << "Umur Jaenal: " << umur["Jaenal"] << endl;
    return 0;
}