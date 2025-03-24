#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string prodi;
    float ipk;
    int angkatan;
};

struct alamat {
    string jalan;
    int nomor;
    string kota;
};

int main() {
    Mahasiswa mhs[5];
    Mahasiswa mhs2;
    mhs.[0] = "Dimas";
    mhs.[0] = "2460";
    mhs.[0] = "Informatika";
    mhs.[0] = 4.1;
    mhs.[0] = 2024;


    cout << "Nama\t: " << mhs.nama << endl;
    cout << "Nim\t: " << mhs.nim << endl;
    cout << "Prodi\t: " << mhs.prodi << endl;
    cout << "Ipk\t: " << mhs.ipk << endl;
    cout << "angkatan\t: " << mhs.angkatan << endl;
    

    mhs2.nama = "Harahap";
    mhs2.nim = "2465";
    mhs2.prodi = "Sistem Informasi";
    mhs2.ipk = 4.2;
    mhs2.angkatan = 2024;
    cout << "Nama\t: " << mhs2.nama << endl;
    cout << "Nim\t: " << mhs2.nim << endl;
    cout << "Prodi\t: " << mhs2.prodi << endl;
    cout << "Ipk\t: " << mhs2.ipk << endl;
    cout << "angkatan\t: " << mhs2.angkatan << endl;

    for (int i = 0; i < 2; i++)
    return 0;
}