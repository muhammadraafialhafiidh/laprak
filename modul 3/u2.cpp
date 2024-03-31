#include <iostream>
using namespace std;

class skincare
{
public:
    string nama, oldnama, newnama;
    int harga;
    skincare *prev;
    skincare *next;
    skincare(string _nama = "", int _harga = 0, skincare *_prev = nullptr, skincare *_next = nullptr)
    {
        nama = _nama;
        harga = _harga;
        prev = _prev;
        next = _next;
    }
};
class tokoskincare
{
private:
    skincare *head;
    skincare *tail;

public:
    tokoskincare()
    {
        head = nullptr;
        tail = nullptr;
    }

    void tambahdata(string _nama, int _harga)
    {
        skincare *newNode = new skincare(_nama, _harga);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        cout << "Data berhasil ditambahkan" << endl;
    }

    void hapusData(string nama)
    {
        if (head == nullptr)
        {
            cout << "Tidak ada data yang dapat dihapus!" << endl;
            return;
        }

        skincare *temp = head;
        while (temp != nullptr)
        {
            if (temp->nama == nama)
            {
                if (temp == head)
                {
                    head = temp->next;
                    if (head != nullptr)
                        head->prev = nullptr;
                }
                else if (temp == tail)
                {
                    tail = temp->prev;
                    if (tail != nullptr)
                        tail->next = nullptr;
                }
                else
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                cout << "Data dengan nama " << nama << " Berhasil dihapus!" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "data dengan nama " << nama << ", tidak ditemukan" << endl;
    }

    bool updatedata(string _oldnama, string _newnama, int _harga)
    {

        skincare *current = head;
        while (current != nullptr)
        {
            if (current->nama == _oldnama)
            {
                current->nama = _newnama;
                current->harga = _harga;
                cout << "Data berhasil di update!" << endl;
                return true;
            }

            current = current->next;
        }
        cout << "Data tidak ditemukan!" << endl;
        return false;
    }

    void tambahdataurutan(string _nama, int _harga, int pos)
    {

        skincare *current = head;
        skincare *prevNode = nullptr;
        skincare *newNode = new skincare(_nama, _harga);
        for (int i = 1; pos && current != nullptr; i++)
        {
            prevNode = current;
            current = current->next;
        }
        if (prevNode == nullptr)
        {
            head = newNode;
        }
        else
        {
            prevNode->next = newNode;
            prevNode->prev = prevNode;
        }
        newNode->next = current;
        if (current != nullptr)
        {
            current->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        cout << "Data berhasil ditambahkan pada posisi " << pos << endl;
    }

    void hapusdataurutan(int pos)
    {
        skincare *current = head;
        skincare *prevNode = nullptr;
        for (int i = 1; i < pos && current != nullptr; i++)
        {
            prevNode = current;
            current = current->next;
        }
        if (current == nullptr)
        {
            cout << "Posisi" << pos << "tidak valid" << endl;
            return;
        }
        if (prevNode == nullptr)
        {
            head = current->next;
        }
        else
        {
            prevNode->next = current->next;
        }
        if (current->next != nullptr)
        {
            current->next->prev = prevNode;
        }
        else
        {
            tail = prevNode;
        }
        delete current;
        cout << "Data pada posisi " << pos << " Berhasil dihapus!" << endl;
    }
    void hapusseluruhdata()
    {
        skincare *current = head;
        skincare *nextNode = nullptr;
        while (current != nullptr)
        {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
        cout << "seluruh data berhasil dihapus!" << endl;
    }

    void tampilkandata()
    {
        if (head == nullptr)
        {
            cout << "tidak ada data yang dapat ditampilkan" << endl;
            return;
        }
        skincare *current = head;
        int i = 1;
        while (current != nullptr)
        {
            cout << i << ". Nama :" << current->nama << ", Harga: Rp" << current->harga << endl;
            current = current->next;
            i++;
        }
    }
};

int main()
{
    tokoskincare toko;
    int pilihan, harga, pos;
    string nama;
    do
    {
        cout << "\n=== Toko Skincare Purwokerto ===" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
        {
            int jumlah;
            cout << "Masukan jumlah yang diinputkan : ";
            cin >> jumlah;
            for (int q = 1; q <= jumlah; q++)
            {
                cout << "Nama : ";
                cin.ignore();
                getline(cin, nama);
                cout << "harga : ";
                cin >> harga;
                toko.tambahdata(nama, harga);
            }
            break;
        }
        case 2:
        {
            toko.hapusData(nama);
            break;
        }
        case 3:
        {
            string oldnama, newnama;
            cout << "Nama produk lama :";
            cin.ignore();
            getline(cin, oldnama);
            cout << "Nama produk baru :";
            getline(cin, newnama);
            cout << "harga : ";
            cin >> harga;
            toko.updatedata(oldnama, newnama, harga);
            break;
        }
        case 4:
        {
            cout << "Nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Harga : ";
            cin >> harga;
            cout << "Posisi : ";
            cin >> pos;
            toko.tambahdataurutan(nama, harga, pos);
            break;
        }
        case 5:
        {
            cout << "Posisi ";
            cin >> pos;
            toko.hapusdataurutan(pos);
            break;
        }
        case 6:
        {
            toko.hapusseluruhdata();
            break;
        }
        case 7:
        {
            toko.tampilkandata();
            break;
        }
        case 8:
        {
            cout << "Terima kasih!" << endl;
            break;
        }

        default:
        {
            cout << "Pilihan tidak valid" << endl;
            break;
        }
        }
    } while (pilihan != 8);
    return 0;
}
