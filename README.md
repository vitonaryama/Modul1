# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (1)</h1>
<p align="center">Vito Naryama Pramudito</p>

## Dasar Teori

Dalam pemrograman komputer, operasi aritmatika seperti penjumlahan, pengurangan, perkalian, dan pembagian merupakan manipulasi dasar terhadap bilangan melalui operator matematis yang dieksekusi secara langsung oleh prosesor (ScienceDirect Topics, n.d.). Konversi bilangan menjadi representasi teks (misalnya “79” menjadi “tujuh puluh sembilan”) memerlukan pemecahan nilai numerik ke dalam komponen satuan dan puluhan, yang kemudian dipetakan ke string menggunakan tabel kata atau aturan bersyarat yang umum dipakai dalam algoritma number to words (Brezeale, 2020). Sementara itu, nested loops atau perulangan bersarang sering digunakan dalam pencetakan pola kompleks karena sebuah loop luar mengontrol baris dan loop dalam mencetak elemen per baris (spasi, angka, simbol), sehingga kombinasi logika sederhana dapat menghasilkan pola visual yang rumit (Okonkwo & Ade Ibijola, 2023). Ketiga aspek ini, yaitu aritmatika dasar, pemetaan teks, dan struktur perulangan bersarang, sering saling berkaitan dalam program pola maupun sistem konversi numerik di banyak bahasa pemrograman.
## Guided 

### 1. [Hello World]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World" << endl;
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "Hello, World" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. [Input Output]

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    const float pi = 3.14;

    cout << "Masukan angka: ";
    cin >> n ;

    cout << "Angka dikeluarkan: " << n << endl;
    cout << "Nilai konstanta pi: " << pi << endl;

    return 0;

}
```
Kode di atas digunakan untuk meminta input angka dari pengguna dan menampilkan hasilnya bersama nilai konstanta pi. Program memakai cin untuk menerima input dan cout untuk mencetak angka serta nilai pi ke layar.

### 3. [Operator]

```C++
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Masukan angka1: ";
    cin >> a;
    cout << "Masukan angka2: ";
    cin >> b;

    //operator aritmatika
    cout << "a + b = " << (a+b) << endl;
    cout << "a - b = " << (a-b) << endl;
    cout << "a * b = " << (a*b) << endl;
    cout << "a / b = " << (a/b) << endl;
    cout << "a % b = " << (a%b) << endl;

    //operator logika
    cout << "a > b = " << (a>b) << endl;
    cout << "a < b = " << (a<b) << endl;
    cout << "a >= b = " << (a>=b) << endl;
    cout << "a <= b = " << (a<=b) << endl;
    cout << "a == b = " << (a==b) << endl;
    cout << "a != b = " << (a!=b) << endl;

    return 0;
}
```
Kode di atas meminta dua angka dari pengguna lalu menampilkan hasil operasi aritmatika dan logika menggunakan cout.

### 4. [Pecabangan]

```C++
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
```
Kode di atas membandingkan dua nilai, angka1 dan angka2, lalu menampilkan hasil perbandingannya menggunakan struktur kondisi if, else if, dan else.

### 5. [Perulangan]

```C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 20;

    while (i <= 10) {
        cout << i << "-";
        i++;
    }

    cout << endl;

    do { // Mengecek, kalo bener yaudah stop, kalo salah ya lanjut di cek lagi
        cout << j << "-";
        j++;
    } while (j <= 10); 
    
}
```
Kode di atas menggunakan perulangan while untuk menampilkan angka dari 0 hingga 10, dan perulangan do while untuk menampilkan nilai j minimal satu kali sebelum memeriksa kondisi.

## Unguided 

### 1. [Unguided1]

```C++
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

```
#### Output:
<img width="1840" height="623" alt="Image" src="https://github.com/user-attachments/assets/b4e1916f-e4df-4890-9535-c582b126f93c" />

Kode di atas digunakan untuk menghitung dan menampilkan hasil operasi aritmatika dua bilangan menggunakan input dari pengguna dengan cin dan output melalui cout.

#### Full code Screenshot:
<img width="1920" height="1080" alt="Image" src="https://github.com/user-attachments/assets/db0d6fa2-9952-46fc-92f8-bdd0b95bb9f0" />

### 2. [Unguided2]

```C++
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

```
#### Output:
<img width="1845" height="623" alt="Image" src="https://github.com/user-attachments/assets/895040ee-ddf3-4fab-9470-727689be134c" />
Kode di atas digunakan untuk mengubah angka yang dimasukkan pengguna menjadi bentuk tulisan dalam bahasa Indonesia dengan menggunakan struktur kondisi if dan array string sebagai referensi kata.

#### Full code Screenshot:
<img width="1920" height="1080" alt="Image" src="https://github.com/user-attachments/assets/325b277b-dfee-42d3-a7fc-f2c742234b4b" />

### 3. [Unguided3]

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        cout << endl;
    }

    for (int s = 0; s < n - 1; s++) {
        cout << "  ";
    }
    cout << "  *" << endl;

    return 0;
}


```
#### Output:
<img width="1842" height="497" alt="Image" src="https://github.com/user-attachments/assets/650c2f5d-8e17-42b8-a2b7-f64e0589ee79" />
Kode di atas digunakan untuk mencetak pola angka berbentuk segitiga terbalik dengan simbol bintang di tengah menggunakan perulangan bersarang for.

#### Full code Screenshot:
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/a0d94376-7511-43da-879f-06139e231957" />

## Kesimpulan
Kesimpulannya, seluruh kode yang telah dibuat menunjukkan penerapan dasar bahasa C++ seperti penggunaan input dan output (cin dan cout), operasi aritmatika dan logika, struktur percabangan if-else, serta perulangan while, do while, dan for. Beberapa program juga menampilkan konsep lanjutan seperti konversi angka menjadi teks dan pembuatan pola dengan loop bersarang, yang secara keseluruhan membantu memahami logika dasar dan alur eksekusi dalam pemrograman C++.

## Referensi
[1] Brezeale, P. (2020, 18 Agustus). Python Application: Converting Numbers to Words.
[2] Okonkwo, C. W., & Ade-Ibijola, A. (2023). Synthesis of nested loop exercises for practice in introductory programming.
[3] ScienceDirect Topics. (n.d.). Arithmetic Operator – overview.
