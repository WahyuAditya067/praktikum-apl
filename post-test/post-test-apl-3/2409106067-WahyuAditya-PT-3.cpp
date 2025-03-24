#include <iostream>
#include <string>
using namespace std;

const int maxpembalap = 24;
const int maxtim = 12;
const int maxuser = 10000;
int jumlahpembalap = 20;
int jumlahtim = 10;
int jumlahuser = 0;

struct User {
    string username;
    string password;
    string role;
};

struct Pembalap {
    string nama;
    string tim;
    string asalNegara;
    string nomor;
    string tanggalLahir;
    int jumlahPodium;
};

struct Tim {
    string nama;
    string markas;
    string teamPrincipal;
    string powerUnit;
    string chassis;
};

User users[maxuser];

Pembalap pembalap[maxpembalap] = {
    {"Max Verstappen", "Red Bull Racing", "Belanda", "1", "30 September 1997", 89},
    {"Liam Lawson", "Red Bull Racing", "Selandia Baru", "30", "11 Februari 2002", 0},
    {"Lando Norris", "McLaren", "Inggris", "4", "13 November 1999", 13},
    {"Oscar Piastri", "McLaren", "Australia", "81", "6 April 2001", 3},
    {"Charles Leclerc", "Scuderia Ferrari", "Monako", "16", "16 Oktober 1997", 27},
    {"Lewis Hamilton", "Scuderia Ferrari", "Inggris", "44", "7 Januari 1985", 195},
    {"George Russell", "Mercedes-AMG Petronas", "Inggris", "63", "15 Februari 1998", 10},
    {"Kimi Antonelli", "Mercedes-AMG Petronas", "Italia", "12", "25 Agustus 2006", 0},
    {"Fernando Alonso", "Aston Martin", "Spanyol", "14", "29 Juli 1981", 104},
    {"Lance Stroll", "Aston Martin", "Kanada", "18", "29 Oktober 1998", 3},
    {"Pierre Gasly", "Alpine", "Prancis", "10", "7 Februari 1996", 4},
    {"Jack Doohan", "Alpine", "Australia", "7", "20 Januari 2003", 0},
    {"Yuki Tsunoda", "Racing Bulls", "Jepang", "22", "11 Mei 2000", 0},
    {"Isaack Hadjar", "Racing Bulls", "Prancis", "6", "28 September 2004", 0},
    {"Carlos Sainz", "Williams", "Spanyol", "55", "1 September 1994", 18},
    {"Alexander Albon", "Williams", "Thailand", "23", "23 Maret 1996", 2},
    {"Esteban Ocon", "Haas", "Prancis", "31", "17 September 1996", 2},
    {"Olliver Bearman", "Haas", "Inggris", "87", "8 Mei 2005", 0},
    {"Nico Hulkenberg", "Sauber", "Jerman", "27", "19 Agustus 1987", 1},
    {"Gabriel Bortoleto", "Sauber", "Brasil", "5", "14 Oktober 2004", 0}
};

Tim tim[maxtim] = {
    {"Red Bull Racing", "Milton Keynes, Inggris", "Christian Horner", "Honda RBPT", "RB21"},
    {"Mercedes-AMG Petronas", "Brackley, Inggris", "Toto Wolff", "Mercedes", "W16"},
    {"Ferrari", "Maranello, Italia", "Frederic Vasseur", "Ferrari", "SF-25"},
    {"McLaren", "Woking, Inggris", "Andrea Stella", "Mercedes", "MCL38"},
    {"Aston Martin", "Silverstone, Inggris", "Mike Krack", "Honda RBPT", "AMR25"},
    {"Alpine", "Enstone, Inggris", "Bruno Famin", "Renault", "A525"},
    {"Williams", "Grove, Inggris", "James Vowles", "Mercedes", "FW47"},
    {"Haas", "Kannapolis, Amerika Serikat", "Ayao Komatsu", "Ferrari", "VF-25"},
    {"Sauber", "Hinwil, Swiss", "Alessandro Alunni Bravi", "Ferrari", "C45"},
    {"Racing Bulls", "Faenza, Italia", "Laurent Mekies", "Honda RBPT", "VCARB 01"}
};

int main() {
    while (true) {
    string pilihanmenu;
    cout << " Selamat Datang " << endl;
    cout << " 1. Registrasi " << endl;
    cout << " 2. Login " << endl;
    cout << " 3. Keluar " << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihanmenu;
    string lanjut;
    cout << "Enter Untuk Melanjutkan...";
    cin.ignore();
    cin.get();
    system("cls");

    if (pilihanmenu == "1") {
        if (jumlahuser >= maxuser) {
        cout << "Maksimum User Tercapai\n";
        continue;
        }
        cout << "\n=== Registrasi ===\n";
        cout << "Masukkan username: ";
        cin >> users[jumlahuser].username;
        cout << "Masukkan password: ";
        cin >> users[jumlahuser].password;
        cout << "Set role (user/admin): ";
        cin >> users[jumlahuser].role;
        if (users[jumlahuser].role != "admin") {
        users[jumlahuser].role = "user";
        }
        jumlahuser++;
        cout << "Registrasi Berhasil\n";
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        continue;
    }
        
    else if (pilihanmenu == "2") {
        int percobaan = 0;
        bool loginberhasil = false;

        while (percobaan < 3) {
        string username, password;
        cout << "=== Login ===\n";
        cout << "Masukkan Username : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");

        for (int i = 0; i < jumlahuser; i++) {
        if (users[i].username == username && users[i].password == password) {
        loginberhasil = true;
                        
        if (users[i].role == "admin") {
        while (true) {
        string pilihanadmin;
        cout << "Menu Admin" << endl;
        cout << "1. Edit Pembalap" << endl;
        cout << "2. Edit Tim" << endl;
        cout << "3. Kembali ke Menu Utama" << endl;
        cout << "Pilih menu : ";
        cin >> pilihanadmin;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
                                
        if (pilihanadmin == "1") {
        string pilihanpembalap;
        cout << "\n1. Tambah Pembalap\n";
        cout << "2. Update Data Pembalap\n";
        cout << "3. Ganti Pembalap\n";
        cout << "4. Kembali\n";
        cout << "Masukkan Pilihan: ";
        cin >> pilihanpembalap;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
                                    
        if (pilihanpembalap == "1") {
        if (jumlahpembalap >= maxpembalap) {
        cout << "\nKapasitas pembalap penuh! Tidak bisa menambah lagi.\n";
        } else {
        Pembalap p;
        cin.ignore();  
        cout << "\nMasukkan data pembalap baru:\n";
        cout << "Nama         : "; getline(cin, p.nama);
        cout << "Tim          : "; getline(cin, p.tim);
        cout << "Asal Negara  : "; getline(cin, p.asalNegara);
        cout << "Nomor        : "; getline(cin, p.nomor);
        cout << "Tanggal Lahir: "; getline(cin, p.tanggalLahir);
        cout << "Jumlah Podium: "; cin >> p.jumlahPodium;
        pembalap[jumlahpembalap++] = p;
        cout << "Pembalap berhasil ditambahkan!" << endl;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
        }

        else if (pilihanpembalap == "2") {
        int updatepembalap;
        cout << "\nDaftar Pembalap F1 2025:\n";
        for (int i = 0; i < jumlahpembalap; i++) {
        cout << i + 1 << ". " << pembalap[i].nama << " (" << pembalap[i].tim << ")\n";
        }                                
        cout << "\nMasukkan nomor pembalap yang ingin diupdate (0 untuk kembali): ";
        cin >> updatepembalap;
        if (updatepembalap >= 1 && updatepembalap <= jumlahpembalap) {
        int index = updatepembalap - 1;
        cin.ignore();
        cout << "\nMasukkan data baru:\n";
        cout << "Nomor         : "; getline(cin, pembalap[index].nomor);
        cout << "Jumlah Podium : "; cin >> pembalap[index].jumlahPodium;
        cout << "Data pembalap berhasil diperbarui!\n";
        } else if (updatepembalap != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
                                        
        else if (pilihanpembalap == "3") {
        int gantipembalap;
        cout << "\nDaftar Pembalap F1 2025:\n";
        for (int i = 0; i < jumlahpembalap; i++) {
        cout << i + 1 << ". " << pembalap[i].nama << " (" << pembalap[i].tim << ")\n";
        }
        cout << "\nMasukkan nomor pembalap yang ingin diganti (0 untuk kembali): ";
        cin >> gantipembalap;                            
        if (gantipembalap >= 1 && gantipembalap <= jumlahpembalap) {
        int index = gantipembalap - 1;
        cin.ignore();
        cout << "\nMasukkan data pembalap baru:\n";
        cout << "Nama         : "; getline(cin, pembalap[index].nama);
        cout << "Asal Negara  : "; getline(cin, pembalap[index].asalNegara);
        cout << "Nomor        : "; getline(cin, pembalap[index].nomor);
        cout << "Tanggal Lahir: "; getline(cin, pembalap[index].tanggalLahir);
        cout << "Jumlah Podium: "; cin >> pembalap[index].jumlahPodium;
        cout << "Pembalap berhasil diganti!\n";
        } else if (gantipembalap != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
                                
        else if (pilihanpembalap != "4") {
        cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
        }

        else if (pilihanadmin == "2") {
        string pilihantim;
        cout << "\n1. Tambah Tim\n";
        cout << "2. Update Data Tim\n";
        cout << "3. Hapus Tim\n";
        cout << "4. Kembali\n";
        cout << "Masukkan Pilihan: ";
        cin >> pilihantim;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
                                        
        if (pilihantim == "1") {
        if (jumlahtim >= maxtim) {
        cout << "\nJumlah tim sudah penuh!" << endl;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
        cout << "Masukkan detail tim baru:" << endl;
        cout << "Nama Tim      : "; getline(cin, tim[jumlahtim].nama);
        cout << "Markas        : "; getline(cin, tim[jumlahtim].markas);
        cout << "Team Principal: "; getline(cin, tim[jumlahtim].teamPrincipal);
        cout << "Power Unit    : "; getline(cin, tim[jumlahtim].powerUnit);
        cout << "Chassis       : "; getline(cin, tim[jumlahtim].chassis);
        jumlahtim++;
        cout << "Tim berhasil ditambahkan!\n";
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
                                
        else if (pilihantim == "2") {
        int choice;
        cout << "\nDaftar Tim F1 2025:\n";
        for (int i = 0; i < jumlahtim; i++) {
        cout << i + 1 << ". " << tim[i].nama << "\n";
        }
        cout << "\nMasukkan nomor tim yang ingin diperbarui (0 untuk kembali): ";
        cin >> choice;                        
        if (choice >= 1 && choice <= jumlahtim) {
        int index = choice - 1;
        cout << "\nMasukkan data baru untuk tim " << tim[index].nama << ":\n";
        cout << "Nama Tim      : "; getline(cin, tim[index].nama);
        cout << "Markas        : "; getline(cin, tim[index].markas);
        cout << "Team Principal: "; getline(cin, tim[index].teamPrincipal);
        cout << "Power Unit    : "; getline(cin, tim[index].powerUnit);
        cout << "Chassis       : "; getline(cin, tim[index].chassis);
        cout << "Tim berhasil diperbarui!\n";
        } else if (choice != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
                                
        else if (pilihantim == "3") {
        int choice;
        cout << "\nDaftar Tim F1 2025:\n";
        for (int i = 0; i < jumlahtim; i++) {
        cout << i + 1 << ". " << tim[i].nama << "\n";
        }
        cout << "\nMasukkan nomor tim yang ingin dihapus (0 untuk kembali): ";
        cin >> choice;
        if (choice >= 1 && choice <= jumlahtim) {
        int index = choice - 1;
        for (int i = index; i < jumlahtim - 1; i++) {
        tim[i] = tim[i + 1];
        }
        jumlahtim--;
        cout << "Tim berhasil dihapus!\n";
        } else if (choice != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }
        }

        else if (pilihanadmin == "3") {
            break;
        }
        else {
            cout << "Pilihan Tidak Valid\n";
        }
        }
        } 
        
        else {
        while (true) {
        string pilihanuser;
        cout << "\nMenu User:\n";
        cout << "1. Lihat daftar pembalap F1 2025\n";
        cout << "2. Lihat daftar tim F1 2025\n";
        cout << "3. Kembali ke Menu Utama\n";
        cout << "Pilih menu: ";
        cin >> pilihanuser;
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
                                
        if (pilihanuser == "1") {
        cout << "\nDaftar Pembalap F1 2025:\n";
        for (int i = 0; i < jumlahpembalap; i++) {
        cout << i + 1 << ". " << pembalap[i].nama << " (" << pembalap[i].tim << ")\n";
        }
        int pilihandatapembalap;
        cout << "\nMasukkan nomor pembalap untuk melihat detail (0 untuk kembali): ";
        cin >> pilihandatapembalap;                        
        if (pilihandatapembalap >= 1 && pilihandatapembalap <= jumlahpembalap) {
        int index = pilihandatapembalap - 1;
        cout << "\nDetail Pembalap:\n";
        cout << "Nama         : " << pembalap[index].nama << "\n";
        cout << "Tim          : " << pembalap[index].tim << "\n";
        cout << "Asal Negara  : " << pembalap[index].asalNegara << "\n";
        cout << "Nomor        : " << pembalap[index].nomor << "\n";
        cout << "Tanggal Lahir: " << pembalap[index].tanggalLahir << "\n";
        cout << "Jumlah Podium: " << pembalap[index].jumlahPodium << "\n";
        } else if (pilihandatapembalap != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }

        else if (pilihanuser == "2") {
        cout << "\nDaftar Tim F1 2025:\n";
        for (int i = 0; i < jumlahtim; i++) {
        cout << i + 1 << ". " << tim[i].nama << "\n";
        }
        int pilihandatatim;
        cout << "\nMasukkan nomor tim untuk melihat detail (0 untuk kembali): ";
        cin >> pilihandatatim;
        if (pilihandatatim >= 1 && pilihandatatim <= jumlahtim) {
        int index = pilihandatatim - 1;
        cout << "\nDetail Tim:\n";
        cout << "Nama Tim       : " << tim[index].nama << "\n";
        cout << "Markas         : " << tim[index].markas << "\n";
        cout << "Team Principal : " << tim[index].teamPrincipal << "\n";
        cout << "Power Unit     : " << tim[index].powerUnit << "\n";
        cout << "Chassis        : " << tim[index].chassis << "\n";
        } else if (pilihandatatim != 0) {
        cout << "Pilihan tidak valid!\n";
        }
        string lanjut;
        cout << "Enter Untuk Melanjutkan...";
        cin.ignore();
        cin.get();
        system("cls");
        }

        else if (pilihanuser == "3") {
            break;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
        }
        }
        break;
        }
        }
                
                if (loginberhasil) break;
                
                percobaan++;
                if (percobaan >= 3) {
                    cout << "Anda telah gagal login 3 kali!\n";
                    return 0;
                }
            }
            continue;
        }
        
        else if (pilihanmenu == "3") {
            cout << "Terima kasih telah menggunakan program ini!\n";
            break;
        }
        
        else {
            cout << "Pilihan tidak valid, coba lagi.\n";
            string lanjut;
            cout << "Enter Untuk Melanjutkan...";
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
    return 0;
}
