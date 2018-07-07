Mengenal Bahasa Pemrograman C++
===============================

Fakta Tentang Bahasa C++
------------------------

C++ adalah sebuah bahasa pemrograman tingkat menengah yang diciptakan
pada tahun 1979 oleh Bjarne Stroustrup, yang awalnya diciptakan sebagai
ekstensi dari bahasa pemrograman C.

Segala hal dalam C++ itu *case sensitive*: `code` tidak sama dengan
`Code`.

Program C++ sederhana
---------------------

Program menggunakan bahasa C++ biasanya diakhiri dengan ekstensi ".cpp";
contohnya *hello.cpp*. Program biasa ditulis menggunakan
*plain text editor* seperti Notepad++, Atom, Visual Studio Code, dan
lain-lain.

Sebelum program yang ditulis dapat dijalankan, program C++ harus
dikompilasi terlebih dahulu. Proses kompilasi ini diperlukan untuk
menghasilkan file yang dapat dieksekusi oleh program. Proses kompilasi
dilakukan dengan menggunakan bernama . Di luar sana ada banyak macam
untuk bahasa pemrograman C++, seperti: Borland C++, Clang, GCC, dan
Visual C++.

Di praktikum ini, kita akan menggunakan program *DevC++* untuk menulis
kode program dan MinGW, yang sudah terintegrasi dengan DevC++, sebagai
*compiler* kita.

Contoh program sederhana:

```{.cpp .numberLines}
/* Program hello.cpp */
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    return 0;
}
```

Keterangan perbaris:

1.  `/*...*/`menandakan bahwa apapun setelah `/*` sampai `*/` adalah
    sebuah komentar. Selain itu, dapat juga menulis komentar dengan
    mengawali baris dengan `//`. Komentar tidak akan diproses oleh alat
    kompilasi.

2.  Baris yang diawali `#` biasa disebut perintah *preprocessor*, yang
    biasanya dapat mengganti kode yang akan di kompilasi.
    `#include<iostream>` menandakan bahwa sebelum melakukan kompilasi
    harus memasukkan kode dalam pustaka *iostream*.

3.  `using namespace std` artinya kita akan menggunakan fungsi dalam lingkup
    `std`. Misalnya fungsi `std::cout`, jika kita menulis `using
    namespace std` sebelum fungsi tersebut dipanggil, kita hanya perlu
    memanggilnya dengan `cout` tanpa perlu menambahkan *prefix* `std::`.

4.  `int main() {...}` fungsi utama sebuah program berjalan. Kurung
    kurawal menandakan pengelompokan beberapa perintah dalam satu blok.

5.  -   `cout <<` untuk menampilkan ekpresi ke layar.
    -   Kata yang diapit oleh tanda kutip dua, seperti `"Hello
        World!\n"`, itu biasa disebut dengan *string* dalam bahasa
        pemrograman.
    -   `\n` biasa disebut sebagai *escape sequence*. Lihat tabel
        *escape sequence*.

6.  `return 0` memberitahukan ke sistem operasi program berjalan dengan
    lancar.


*Escape Sequence*   Karakter yang direpresentasikan
------------------- ------------------------------------
`\a`                 Bel sistem (suara *beep*)
`\b`                 *Backspace* (hapus)
`\f`                 *Page Break*
`\n`                 Baris baru
`\r`                 Mengembalikan kursor ke awal baris
`\t`                 Tab
`\\`                *Backslash*
`\'`                 Tanda kutip satu
`\"`                Tanda kutip dua

: Beberapa *Escape Sequence* yang dapat digunakan

Setiap baris dalam bahasa pemrograman C++ perlu diakhiri dengan tanda
titik koma "`;`". Kecuali, untuk *preprocessor* dan tanda akhiran
blok `{}`.

Fitur Dasar Program
-------------------

### Nilai dan Pernyataan

Sebelum praktikum ini berlanjut, ada beberapa definisi yang harus
praktikan kuasai:

Pernyataan

:   adalah sebuah unit dalam kode yang melakukan sesuatu -- sebuah dasar
    dari pembuatan program.

Ekspresi

:   adalah pernyataan yang memiliki *nilai* -- misalnya angka, karakter,
    hasil penjumlahan angka, atau kalimat. $5 + 6 / 3$ dan adalah
    ekspresi.

Perlu diingat sekali lagi, bahwa tidak semua *pernyataan* adalah
*ekspresi*.

### Operasi Aritmatika

Kita dapat melakukan operasi matematika dalam program kita. Sebagai
contoh, ganti `"Hello World!\n"` dengan $5 + 6 / 3$. Sehingga
program akan melakukan perhitungan terlebih dahulu, setelah itu
hasilnya baru dicetak ke layar.

```{.cpp .numberLines startFrom="5"}
int main()
{
    cout << 5 + 6 / 3;

    return 0;
}
```

Operator yang dapat digunakan sama seperti pada matematika biasa. `+`,
`-`, `*`, `/`, dan tanda kurung `()` memiliki arti yang sama seperti
operator matematika pada umumnya. Hanya saja, ada tambahan operator `%`
sebagai operator operasi modulo atau sisa hasil bagi.

### Tipe Data

Setiap ekspresi dalam bahasa pemrograman C++ memiliki sebuah tipe data.
Tipe data bisa diartikan sebagai jenis dari data tersebut. Contoh, $42$
adalah *integer*, $3.14$ adalah angka (desimal), dan `'Y'` adalah karakter.
Setiap tipe data memiliki perbedaan memori yang digunakan untuk
menyimpannya.

Sebuah operasi pada tipe data hanya dapat dilakukan dengan tipe data
yang sesuai. Sebuah operator juga akan menghasilkan nilai yang sesuai
dengan tipe dari operan yang digunakan dalam operasi. Misalnya, $1/4$
hasilnya akan dibulatkan menjadi integer $0$. Untuk mendapatkan hasil
$0.25$, kita harus melakukan operasi menggunakan angka desimal, sehingga
operasi $1/4$ diubah menjadi $1.0/4.0$.

Jenis    Deskripsi
-------- --------------------------------------------------------------
int      Bilangan Bulat
float    Bilangan Desimal
char     Sebuah Karakter, ditandakan dengan tanda kutip satu ('a', '3')
string   Kalimat/Kumpulan Karakter ("ITI")
bool     Nilai Boolean, yaitu *True* ($1$) atau *False* ($0$)

: Tipe data standar yang sering digunakan

Variabel
--------

Variabel adalah sebuah tempat yang memiliki nama yang berguna untuk
menyimpan sebuah nilai. Sebuah variabel biasanya memiliki jenis/tipe
tersendiri (lihat tabel tipe data sebelumnya). Contoh, kita akan
menggunakan hasil dari $3+3$ berulang kali. Kita bisa menyimpan hasil
operasi tersebut dalam sebuah variabel yang akan kita sebut variabel
`x`.

```{.cpp .numberLines}
/* Program variabel.cpp */
#include <iostream>
using namespace std;

int main()
{
  int x;
  x = 3 + 3;

  cout << x + 3 << ' ' << x / 2;
  return 0;
}
```

**Perhatikan** kita bisa menyambungkan `<<` dalam `cout` untuk
menampilkan lebih dari satu ekspresi atau variabel.

Baris ke-7 biasa disebut sebagai deklarasi variabel `x`. Kita harus
memberitahu kepada *compiler* jenis dari variabel `x`, sehingga
komputer tahu berapa memori yang harus dialokasikan dan juga operasi
apa saja yang bisa dilakukan kepada variabel tersebut.

Baris ke-8 biasa disebut sebagai inisialisasi variabel `x`, dimana kita
memberikan nilai awal untuk `x`. Di baris ini, kita juga berjumpa dengan
operator `=`, yang digunakan untuk memberi nilai pada variabel. Kita
juga bisa mengubah nilai dengan menggunakan operator `=` lagi.

Kita dapat menyederhanakan program di atas, dengan menggabungkan baris
ke-7 dan ke-8:

``` {.cpp .numberLines startFrom="5"}
int main()
{
  int x = 3 + 3;

  cout << x + 3 << ' ' << x / 2;
  return 0;
}
```

Bentuk deklarasi/inisialisasi seperti ini terlihat lebih rapih, sehingga
jika bisa bentuk ini selalu praktikan gunakan.

---------- ---------- ----------- ----------
auto       else       namespace   switch
bool       enum       new         this
break      explicit   operator    throw
case       extern     private     true
catch      false      public      typedef
char       float      return      union
class      for        short       unsigned
const      goto       signed      using
continue   if         sizeof      virtual
default    int        static      void
do         long       struct      while
---------- ---------- ----------- ----------

: Contoh *Keyword* dalam bahasa pemrograman C++

Variabel memiliki beberapa ketentuan untuk penentuan namanya;

1.  Variabel boleh terdiri dari karakter A--Z, a--z, 0--9, dan garis
    bawah `_`.
2.  Variabel tidak boleh dimulai dengan angka, contoh; `3_ayam`.
3.  Variabel tidak diperkenankan mengikuti *keywords* dalam bahasa
    pemrograman C++.

Masukan (Input)
---------------

Kita sudah dapat memanipulasi nilai dan variabel. Sekarang kita bisa
juga meminta pengguna program untuk memasukkan nilai yang diinginkan ke
variabel.

```{.cpp .numberLines}
/* Program input.cpp */
#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;

  cout << "Pangkat 2 dari " << x << " adalah " << x*x;

  return 0;
}
```

Seperti yang digunakan untuk menampilkan nilai, (baris ke-8) digunakan
untuk memasukkan nilai. Sehingga saat pengguna mengetik nilai integer,
lalu menekan tombol `Enter`, nilai yang diketik akan masuk ke dalam
variabel `x`.

#### Latihan

1.  Buat sebuah program yang dapat digunakan untuk meminta nama dan
    nomor mahasiswa, lalu tampilkan nama dan nomor mahasiswa tersebut!
    (gunakan variabel tipe `string` untuk nama)
2.  Buat sebuah program untuk menghitung luas dan keliling lingkaran!
    Radius lingkaran dimasukkan oleh pengguna.
