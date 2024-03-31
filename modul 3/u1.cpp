#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node

struct Node
{
    string nama;
    int umur;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

// Tambah Depan
void insertDepan(string nama, int umur)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->umur = umur;
    baru->next = NULL;

    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang(string nama, int umur)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->umur = umur;
    baru->next = NULL;

    if (head == NULL)
    {
        head = baru;
        tail = baru;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Tengah
void insertTengah(string nama, int umur, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {

        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        // buat node baru
        Node *baru;
        baru = new Node();
        baru->nama = nama;
        baru->umur = umur;

        int i = 1;
        Node *current = head;
        while (i < posisi - 1 && current->next != NULL)
        {
            current = current->next;
            i++;
        }
        baru->next = current->next;
        current->next = baru;
    }
}

void remove(string nama)
{

    if (head == NULL)
    {

        cout << "List kosong!" << endl;
        return;
    }
    if (head->nama == nama)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Data berhasil dihapus!" << endl;
        return;
    }
    Node *current = head;
    while (current->next != NULL && current->next->nama != nama)
    {
        current = current->next;
    }
    if (current->next == NULL)
    {
        cout << "Data tidak ditemukan!" << endl;
        return;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
    cout << "Data berhasil dihapus!" << endl;
}

void update(string oldnama, string newnama, int newumur)
{
    if (head == NULL)
    {
        cout << "List kosong!" << endl;
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        if (current->nama == oldnama)
        {
            current->nama = newnama;
            current->umur = newumur;
            cout << "Data berhasil diupdate!" << endl;
            return;
        }
        current = current->next;
    }
    cout << "Data tidak ditemukan!" << endl;
}

// Tampilkan List
void tampil()
{
    if (head == NULL)
    {
        cout << "List Kosong!" << endl;
        return;
    }
    Node *current = head;
    int o = 1;
    while (current != NULL)
    {
        cout << o++ << ". "
             << "Nama:" << current->nama << ", Usia:" << current->umur << endl;
        current = current->next;
    }
}

int main()
{
    int choice;
    int choice_data;
    string nama;
    int umur;
    int posisi;
loop_menu:

    cout << "\nMenu" << endl;
    cout << "1. Tambah data" << endl;
    cout << "2. Hapus data" << endl;
    cout << "3. Ubah data" << endl;
    cout << "4. Tampilkan data" << endl;
    cout << "5. keluar" << endl;
    cout << "Masukkan pilihan dari menu (1-5): ";
    cin >> choice;
    switch (choice)
    {

    case 1:
    {
    loop_choice_data:
        cout << endl;
        cout << "Tambahkan Data\n";
        cout << "Masukan posisi Data :\n";
        cout << "1. Posisi di Depan\n";
        cout << "2. Posisi di Belakang\n";
        cout << "3. Posisi di Tengah\n";
        cout << "4. Keluar\n";
        cout << "Masukkan posisi pilihan (1-4): ";
        cin >> choice_data;
        if (choice_data == 1)
        {
            cout << "--Posisi Di Depan--\n";
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            insertDepan(nama, umur);
        }
        else if (choice_data == 2)
        {
            cout << "--Posisi Di Belakang--\n";
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            insertBelakang(nama, umur);
        }
        else if (choice_data == 3)
        {
            cout << "--Posisi Di Tengah--\n";
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            insertTengah(nama, umur, posisi);
        }
        else if (choice_data == 4)
        {
            cout << "Keluar dari Menu\n";
            goto loop_menu;
        }
        else
        {
            cout << "Pilihan Anda Tidak Valid\n";
        }
        goto loop_choice_data;
        break;
    }

    case 2:
    {
        cout << "---- Hapus Data ----\n";
        cout << "Masukkan nama yang ingin dihapus :";
        cin >> nama;
        remove(nama);
        break;
    }
    case 3:
    {
        string oldnama, newnama;
        cout << "---- Ubah Data ----\n";
        cout << "Masukkan nama yang ingin diubah: ";
        cin >> oldnama;
        cout << "Masukkan nama yang baru: ";
        cin >> newnama;
        cout << "Masukkan usia baru: ";
        cin >> umur;
        update(oldnama, newnama, umur);
        break;
    }

    case 4:
    {
        cout << "---- Tampilkan Data ----\n";
        tampil();
        break;
    }

    case 5:
    {
        cout << "Terima Kasih" << endl;
        return 0;
    }
    default:
    {
        cout << "Pilihan tidak valid" << endl;
    }
    }

    goto loop_menu;
    return 0;
}
