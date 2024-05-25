# Sistem Manajemen Perpustakaan

Sistem Manajemen Perpustakaan adalah aplikasi sederhana yang dibuat menggunakan bahasa pemrograman C. Aplikasi ini memungkinkan pengguna untuk mengelola koleksi buku di perpustakaan melalui antarmuka baris perintah (CLI). Fitur yang disediakan meliputi penambahan buku, daftar buku, peminjaman buku, dan pengembalian buku.

## Fitur

1. **Tambah Buku**
   - Menambahkan buku baru ke perpustakaan.
2. **Daftar Buku**
   - Menampilkan daftar semua buku yang ada di perpustakaan.
3. **Pinjam Buku**
   - Meminjam buku berdasarkan ID buku.
4. **Kembalikan Buku**
   - Mengembalikan buku berdasarkan ID buku.
5. **Keluar**
   - Keluar dari aplikasi.

## Prasyarat

Pastikan Anda telah menginstal compiler C di sistem Anda. Untuk Linux dan Mac, GCC (GNU Compiler Collection) biasanya sudah terinstal. Untuk Windows, Anda bisa menggunakan MinGW atau compiler lainnya.

## Cara Menggunakan

1. **Clone repository ini:**
   ```sh
   https://github.com/guns-joy/manajemen-perpus.git
   ```
 2. **Masuk ke direktori**
     ```sh
     cd manajemen-perpus
     ```
  4. **Kompilasi program**
  ```sh 
 gcc manajemen-perpus.c -o manajemen-perpus
```
5. **Jalankan program**
 ```sh
./library_management
```

## Preview menu
<pre>
   Sistem Manajemen Perpustakaan
1. Tambah Buku
2. Daftar Buku
3. Pinjam Buku
4. Kembalikan Buku
5. Keluar
Masukkan pilihan: 
</pre>

## Struktur Program 

<pre>
   Struktur Program
Program ini menggunakan struktur data sederhana untuk menyimpan informasi buku. Berikut adalah penjelasan singkat dari setiap bagian program:

1. Deklarasi Struktur dan Variabel:
typedef struct { ... } Buku; : Struktur untuk menyimpan informasi buku, termasuk ID, judul, dan status apakah buku sedang dipinjam.

2. Fungsi tambahBuku:

Menambahkan buku baru ke perpustakaan dengan meminta pengguna memasukkan judul buku.

3. Fungsi daftarBuku:
Menampilkan daftar semua buku yang ada di perpustakaan.

4. Fungsi pinjamBuku:
Memungkinkan pengguna untuk meminjam buku berdasarkan ID buku.

5. Fungsi kembalikanBuku:
Memungkinkan pengguna untuk mengembalikan buku berdasarkan ID buku.
Fungsi main:

6. Menampilkan menu utama dan memproses pilihan pengguna untuk memanggil fungsi yang sesuai.
</pre>
