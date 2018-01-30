# Buku Petunjuk Praktikum Konsep Pemrograman

Lumbun ini digunakan untuk menyimpan *source* untuk modul praktikum konsep pemrograman di Institut Teknologi Indonesia.

## Kompilasi

Pastikan telah terpasang distribusi `texlive` di komputer anda. Lalu gunakan perintah di bawah untuk mengkompilasi *source* menjadi file PDF.

```
git clone https://github.com/yursan9/modul-kp-iti.git
cd modul-kp-iti
latexmk -lualatex -shell-escape main.tex
```

Perintah di atas menghasilkan file `main.pdf` yang dapat dibaca dengan program pembaca PDF.
