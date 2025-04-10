#include <iostream>
#include <string>

using namespace std;

// int kali(int a, int b){
//     return a * b;
// }

int faktorial(int n) {
    if (n == 0)
        return 1;
    return n * faktorial(n-1);
}

int main() {
    // cout << kali(5,6);
    cout << faktorial(5);
}