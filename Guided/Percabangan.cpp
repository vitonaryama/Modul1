#include <iostream>
using namespace std;

int main() {
    int angka1 = 10;
    int angka2 = 20;

    if (angka1 > angka2) {
        cout << "Angka1 lebih besar dari Angka2" << endl;
    } else if (angka1 < angka2) {
        cout << "Angka1 lebih kecil dari Angka2" << endl;
    } else {
        cout << "Angka1 sama dengan Angka2" << endl;
    }

    return 0;
}