Pengaturan Alur Program - Switch
================================

*Switch*
--------

Pada praktikum sebelumnya kita belajar tentang mengatur alur program
menggunakan *if* dan rangkaiannya. Sekarang, kita akan belajar tentang
*switch* yang memiliki fungsi yang sama untuk mengatur alur program.

``` {.cpp}
switch (var){
case ekspresi-konstan 1:
    pernyataan 1;
    break; // Opsional
case ekspresi-konstan 2:
    pernyataan 2:
    break;
default: // Opsional
    pernyataan jika case tidak ada yang tepat;
    break;
}
```

Cara kerja dari *switch* adalah membandingkan nilai dalam `var` dengan
ekspresi konstan ke-1, ke-2, ..., ke-$n$ sampai nilai perbandingan yang
dihasilkan adalah `true`. Jika sudah menemukan perbandingannya, maka
pernyataan pada *case* $n$ tersebut akan dijalankan, dan *case* yang
lain, biasanya, tidak akan diperdulikan.

```{.cpp .numberLines}
/* Program ucap_angka.cpp */
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan angka:";
    cin >> angka;

    switch (angka){
    case 1:
        cout << "Satu!\n";
        break;
    case 2:
        cout << "Dua!\n";
        break;
    case 3:
        cout << "Tiga!\n";
        break;
    default:
        cout << "Tidak dapat mengucap angka " << angka << endl;
        // Program keluar karena terjadi kesalahan
        return 1;
    }

    cout << "Program selesai.\n";
    return 0;
}
```

Jika kalian perhatikan dengan seksama, baris-baris di bagian *switch*
bisa kita tulis ulang dengan *if, else if,* dan *else* dan menghasilkan
program yang sama.

``` {.cpp .numberLines startFrom="11"}
if (angka == 1)
    cout << "Satu!";
else if (angka == 2)
    cout << "Dua!";
else if (angka == 3)
    cout << "Tiga!";
else{
    cout << "Tidak dapat mengucap angka " << angka << endl;
    // Program keluar karena terjadi kesalahan
    return 1;
}
```

Contoh program *switch* yang tidak memiliki pernyataan di dalam *case*-nya.

```{.cpp .numberLines}
/* Program konfirmasi_hapus.cpp */
#include <iostream>
using namespace std;

int main()
{
    char pilihan;
    cout << "Apa anda yakin ingin menghapus data simpanan?[Y/n] ";
    cin >> pilihan;

    switch (pilihan){
    case 'Y':
    case 'y':
        cout << "Anda berhasil menghapus simpanan anda.\n";
        break;
    case 'N':
    case 'n':
    default:
        cout << "Dialihkan ke menu utama.\n";
        break;
    }

    cout << "Program selesai.\n";
    return 0;
}
```

##### Latihan

1.  Buat sebuah program yang menerima masukkan angka 1--12, dan
    mengeluarkan nama bulan sesuai angka urutan yang dimasukkan. Jika
    pengguna memasukkan angka diluar jangkauan, tampilkan peringatan.
