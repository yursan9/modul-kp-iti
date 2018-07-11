Pengaturan Alur Program - IF
============================

Motivasi
--------

Secara umum, program biasanya mengeksekusi perintah dari awal dan akhir
secara berurutan. Pernyataan pertama dieksekusi, lalu yang kedua, terus
yang ketiga, sampai program mencapai akhirnya. Sebuah program mungkin
tidak akan berguna, jika dia hanya bisa menjalankan perintah yang sama
setiap kali dijalankan. Program akan lebih berguna lagi jika dia bisa
mengeksekusi perintah lain, tergantung dari kriteria yang ditentukan.

Sebagai contoh, jika program untuk memeriksa sebuah dokumen dan mencari
berapa banyak sebuah kata muncul di dalam dokumen tersebut, akan lebih
bagus meskipun dokumennya berubah program tersebut tetap menghasilkan
perhitungan yang benar. Contoh lainnya, sebuah permainan video yang bisa
menggerakkan karakter yang ada sesuai dengan keinginan pemain. Kita
perlu program yang bisa diatur alur eksekusinya. Karena itu kita akan
belajar tentang pengaturan alur eksekusi program.

Kondisi
-------

Pengaturan alur eksekusi program biasanya terjadi karena ada kondisi
yang terpenuhi dalam program tersebut. Biasanya kita akan memeriksa
sebuah ekpresi atau variabel, apakah memenuhi kondisi yang kita
inginkan?

Untuk memeriksa kondisi tersebut kita bisa memeriksanya dengan
operator relasi dan logika.

### Operator Relasi

Operator relasi bekerja dengan membandingkan dua operan, sama seperti
operator aritmatika (contoh, `a > b`), tetapi mereka menghasilkan nilai
*Boolean*; *true* atau *false*. Sebagai contoh, anggap variabel `x` dan
`y` memiliki nilai masing-masing 4 dan 2. Lalu, `x > y` akan
menghasilkan *true* dan `x < y` akan menghasilkan *false*.

 Operator  Arti
---------- -------------------------
   `>`     Lebih dari
  `>=`     Lebih dari sama dengan
   `<`     Kurang dari
  `<=`     Kurang dari sama dengan
  `==`     Sama dengan
  `!=`     Tidak sama dengan

: Daftar operator relasi


### Operator Logika

Operator logika biasanya digunakan untuk menggabungkan hasil operasi
dari operator relasi untuk menghasilkan kondisi yang rumit:

 Operator  Arti
---------- ----------
    &&     Dan (*And*)
    ||     Atau (*Or*)
    !      Bukan (*Not*)

: Daftar operator logika

Operator diatas menghasilkan *true* atau *false*, menurut aturan
logika. Contoh penggunaan operator logika (jika `x = 4` dan `y = 8`):

```{.cpp}
!(x > 2)                        // false
(x == y) || (x < y)             // true
(x == y) && (x > y)             // false
!(x > 2) && (x == y) || (x < y) // true
```

*If*, *If-Else*, dan *If-Else if*
---------------------------------

*Syntax* dari pengaturan alur *if* adalah:

```{.cpp}
if (kondisi){
    pernyataan 1;
    pernyataan 2;
    ...
}
```

Jika pernyataannya hanya satu kita bisa menghilangkan tanda kurung
kurawal dalam *if*, sehingga menghasilkan *syntax*:

```{.cpp}
if (kondisi)
    pernyataan 1;
```

Perhatikan program sederhana untuk menentukan bilangan genap berikut:

```{.cpp .numberLines}
/* Program genap.cpp */
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan bilangan:";
    cin >> angka;

    if (angka%2 == 0)
        cout << "Bilangan genap.\n";

    cout << "Program selesai.\n";
    return 0;
}
```

Saat kalian jalankan, lihat hasil program tersebut --- bilangan yang
dimasukkan mempengaruhi lajurnya program. Jika `angka` di-modulo $2$
tidak menghasilkan $0$, baris ke-12 tidak akan pernah di eksekusi.

Bagaimana kalau program sebelumnya ingin dimodifikasi sehingga program
tersebut juga bisa menentukan bilangan yang dimasukkan itu bilangan
bulat atau ganjil? Kita hanya perlu menambahkan pernyataan *else* dalam
program.

Sehingga program menjadi seperti ini:

```{.cpp .numberLines}
/* Program genap_ganjil.cpp */
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan bilangan:";
    cin >> angka;

    if (angka%2 == 0)
        cout << "Bilangan genap.\n";
    else
        cout << "Bilangan ganjil.\n";

    cout << "Program selesai.\n";
    return 0;
}
```

Dalam rangkaian *if*, dan nanti *else if*, *else* berguna untuk
menangkap alur program jika kondisi dalam *if* dan *else if* tidak
terpenuhi.

Program yang biasa kita gunakan sehari-hari, biasanya memiliki banyak
variasi eksekusi yang dapat dilakukan jika kita menginginkannya. Dengan
pernyataan *if* di atas, kita bisa merubah jalur eksekusi jika
kondisinya hanya terdiri dari satu kondisi. Sekarang kita akan melihat
program yang dapat menerima rantai kondisi yang berbeda. Dibawah ini
akan ada program yang memeriksa umur orang yang datang ke sebuah tempat;

```{.cpp .numberLines}
/* Program penjaga_pintu.cpp */
#include <iostream>
using namespace std;

int main()
{
    string nama;
    int umur;

    cout << "Masukkan nama anda:";
    getline(cin, nama);
    cout << "Masukkan umur anda:";
    cin >> umur;

    cout << "Halo, " << nama << "!\n";
    if (umur >= 18)
        cout << "Silahkan masuk.\n";
    else if (umur > 13 && umur < 18)
        cout << "Anda hanya boleh masuk dengan bimbingan orang tua.\n";
    else
        cout << "Anda tidak boleh masuk.\n";

    cout << "Program selesai.\n";
    return 0;
}
```

Program diatas akan memeriksa umur dari pengguna. Jika $umur \geq 18$
maka program mempersilahkan pengguna masuk, jika $13 < umur < 18$ maka
pengguna hanya boleh masuk dengan ada bimbingan orang tua, dan jika
semua kondisi sebelumnya tidak ada yang terpenuhi, pengguna dilarang
masuk.

Jika kita lihat kode program diatas, ada sebuah pernyataan *else if*
yang berguna untuk memberikan kondisi baru sesudah pernyataan *if*
sebelumnya. Ini menyebabkan pernyataan *if*, *else if*, dan *else*
menjadi sebuah rangkaian kondisi. Rangkaian kondisi harus selalu
dimulai dengan pernyataan *if*. Setelahnya, baru dapat menggunakan
*else if* atau diakhiri oleh *else*.

##### Latihan

1.  Buatlah sebuah program yang menghitung nilai akhir dengan ketentuan
    sebagai berikut:

    > A : 80 -- 100\
    > B : 70 -- 79\
    > C : 60 -- 69\
    > D : 45 -- 59\
    > E : 0 -- 44\

    Nilai yang dimasukkan berupa nilai UAS, UTS, tugas, dan absensi.
    Rumus untuk nilai keseluruhan:
    $$N = 10\% \times \textrm{absensi} + 15\% \times \textrm{tugas} + 25\% \times
        \textrm{UTS} + 50\% \times \textrm{UAS}$$ Tampilkan $N$ dalam
    bentuk huruf seperti ketentuan diatas.
