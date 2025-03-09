#include <iostream>
using namespace std;

const string pin = "0067";
const int maks = 3;

void enter () {
    string lanjut;
    cout << "Enter Untuk Melanjutkan...";
    cin.ignore();
    cin.get();
    system("cls");
}

int login () {
    string inputpin;
    int percobaan = 0;
    while (percobaan < maks) {
        cout << "Masukkan Pin Anda : ";
        cin >> inputpin;
        if (inputpin == pin) {
            return true;
        }
        else {
            cout << "Pin Salah" << endl;
            percobaan++;
        }
    }
    return false;
}

void Menu() {
    cout << "=== MENU ATM ===" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Setor Tunai" << endl;
    cout << "3. Tarik Tunai" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilihan : ";
}

void ceksaldo(int saldo) {
    cout << "Saldo Anda Saat ini Rp. " << saldo << endl;
}

void setoruang(int &saldo) {
    int setor;
    while (true) {
        cout << "Masukkan Jumlah Setor Tunai : ";
        cin >> setor;

        if (setor < 0) {
            cout << "Jumlah tidak valid! Harap masukkan angka positif." << endl;
        } 
        else {
            saldo += setor;
            cout << "Setor Tunai Berhasil" << endl;
            break; 
        }
    }
}

void tariktunai(int &saldo) {
    int tarik;
    while (true) {
        cout << "Masukkan Jumlah Tarik Tunai : ";
        cin >> tarik;

        if (tarik > 0) {
            if (saldo >= tarik) {
                saldo -= tarik;
                cout << "Penarikan Tunai Berhasil!" << endl;
                break;
            }
            else {
                cout << "Saldo Tidak Mencukupi" << endl;
            }
        }
        else {
            cout << "Jumlah Tidak Valid! Harus Berupa Angka Positif" << endl;
        }
    }
}

int main () {
    int saldo = 200000;

    switch (login()) {
        case false:
            cout << "Anda Telah Gagal Login Sebanyak 3 Kali. Coba Beberapa Saat Lagi" << endl;
            break;
        case true:

        system("cls");
        string pilihan;
        while (true) {
            Menu();
            cin >> pilihan;
            enter();
    
            if (pilihan == "1") {
                ceksaldo(saldo);
                enter();
            }
            else if (pilihan == "2" ) {
                setoruang(saldo);
                enter();
            }
            else if (pilihan == "3" ) {
                tariktunai(saldo);
                enter();
            }
            else if (pilihan == "4" ) {
                cout << "Terima Kasih Sudah Menggunakan Program ATM Ini" << endl;
                break;
            }
            else {
                cout << "Pilihan tidak valid!" << endl;
            }
        }
    }
    return 0;
}