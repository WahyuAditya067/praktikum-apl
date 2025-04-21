#include <iostream>
using namespace std;

struct Address {
    string kota;
    string provinsi;
    string negara;
};

//menggunakan dereference
int UbahNilai(int *a, int b) {
    return *a = b;
}

int main() {
    // Address address1, address2;

    // address1.kota = "Samarinda";
    // address1.provinsi = "Kalimantan Timur";
    // address1.negara = "Indonesia";



    // address2.kota = "Tenggarong";
    // address2.provinsi = "Kalimantan Timur";
    // address2.negara = "Indonesia";

    // cout << address1.kota << endl;
    // cout << address2->kota << endl;

    // int arr[3] = {1, 2, 3};
    // cout << arr


    // int a = 5;
    // // int b = a;

    // int *b = &a;

    // *b= 10;
    // cout << "Nilai a: " << a << endl; 
    // cout << "Alamat a: " << &a << endl;
    // cout << "Nilai b: " << *b << endl; 
    // cout << "Alamat b: " << b << endl;

    int a = 5;
    int b = 10;

    UbahNilai(&a, b);
    cout << "Nilai a: " << a << endl;


    return 0;
}