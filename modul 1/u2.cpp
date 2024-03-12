#include <iostream>

using namespace std;

class Lingkaran
{
private:
    double jari_jari;

public:
    void setJariJari(double r)
    {
        jari_jari = r;
    }
    double hitungLuas()
    {
        return 3.14 * jari_jari * jari_jari;
    }
};

int main()
{
    Lingkaran lingkaran1;
    lingkaran1.setJariJari(21);
    cout << "Luas lingkaran: " << lingkaran1.hitungLuas();
    return 0;
}
