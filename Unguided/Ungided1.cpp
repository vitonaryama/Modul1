#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Program Operasi Dua Bilangan" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;

    cout << "Hasil Perhitungan:" << endl;
    cout << "Penjumlahan : " << a << " + " << b << " = " << a + b << endl;
    cout << "Pengurangan : " << a << " - " << b << " = " << a - b << endl;
    cout << "Perkalian   : " << a << " * " << b << " = " << a * b << endl;
    cout << "Pembagian   : " << a << " / " << b << " = " << a / b << endl;

    return 0;
}
