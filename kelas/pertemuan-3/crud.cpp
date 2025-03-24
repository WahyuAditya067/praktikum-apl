#include <iostream>
using namespace std;


struct Alamat {
    string jalan;
    int nomor;
    string kota;
};

struct Mahasiswa {
    string nama;
    string nim;
    string prodi;
    float ipk;
    int angkatan;
    Alamat alamat;
};

#define maxmahasiswa 5

int main()
{
    int panjang = 0;
    Mahasiswa mhs[maxmahasiswa];
    int pilihan;

    do
    {
        cout << "Menu Program" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Tambah Data" << endl;
        cout << "3. Ubah Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            if (panjang == 0)
                cout << "Belum ada data" << endl;
            else {
                cout << "Data Mahasiswa" << endl;
                for (int i = 0; i < panjang; i++) {
                    cout << "Nama\t: " << mhs[i].nama << endl;
                    cout << "Nim\t: " << mhs[i].nim << endl;
                    cout << "IPK\t: " << mhs[i].ipk << endl;
                }
            }
            break;
        case 2:
            if (panjang < maxmahasiswa) {
                cout << "Masukkan nama : " << endl;
                cin.ignore();
                getline(cin, mhs[panjang].nama);

                cout << "Masukkan nim : " << endl;
                cin.ignore();
                getline(cin, mhs[panjang].nim);

                cout << "Masukkan ipk : " << endl;
                cin.ignore();
                getline(cin, mhs[panjang].ipk);

                cout << "Masukkan jalan : " << endl;
                cin.ignore();
                getline(cin, mhs[panjang].alamat.jalan);

                cout << "Masukkan ipk : " << endl;
                cin.ignore();
                getline(cin, mhs[panjang].ipk);
            }
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout << "Program selesai" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
        }
    } while (pilihan != 5);
}