#include <iostream>
#include <string>
using namespace std;

int main() {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    int n;

    cout << "Masukkan angka : ";
    cin >> n;

    cout << "Hasil : ";

    if (n == 0) cout << "nol";
    else if (n == 10) cout << "sepuluh";
    else if (n == 11) cout << "sebelas";
    else if (n < 20) cout << satuan[n - 10] << " belas";
    else if (n < 100)
        cout << satuan[n / 10] << " puluh " << satuan[n % 10];
    else if (n == 100)
        cout << "seratus";
    else
        cout << "Angka di luar jangkauan";

    return 0;
}
