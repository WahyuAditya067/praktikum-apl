#include <iostream>
using namespace std;

int main() {
    // string nama[5] = {"Dimas", "Harahap", "Santoso", "Kalingga", "Ucup"};
    // int angka[3];
    // angka[0] = 1;
    // angka[1] = 2;
    // angka[2] = 3;

    // cout << nama [1] << endl;
    // cout << angka [2] << endl;

    // int angka[5] = {1, 2, 3, 4, 5};
    // int panjang = sizeof(angka) / sizeof(angka[0]);

    // int panjang2 = sizeof(angka) / sizeof(int);
    // cout << "Panjang 1\t: " << panjang << endl;
    // cout << "Panjang 2\t: " << panjang2 << endl;
    // cout << sizeof(angka);

    // for (int i = 0; i < panjang; i++) {
    //     cout << angka[i] << endl;
    // }

    // for (int item: angka) {
    //     cout << item << endl;
    // }

    // cout << angka <<endl;
    // for(int i = 0; i < panjang, i++) {
    //     cout << &angka[i] << endl;
    // }

    // angka[1] = 6;

    // for (int item: angka) {
    //     cout << item << endl;
    // }
    
    // int angka[3][2] = {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6},
    // }

    // cout << angka[1][1] << endl;

    int angka[2][3][2] = {
        {
            {1, 2},
            {3, 4},
            {5, 6},
        },
        {
            {7, 8},
            {9, 10},
            {11, 12},
        }
    };

    cout << angka[1][1][1] << endl;

    return 0;
}