#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUKU 100
#define MAX_JUDUL 50

// Struktur untuk buku
typedef struct {
    int id;
    char judul[MAX_JUDUL];
    int dipinjam; // 0 jika buku tersedia, 1 jika dipinjam
} Buku;

// Deklarasi array buku
Buku perpustakaan[MAX_BUKU];
int jumlahBuku = 0;

// Fungsi untuk menambah buku baru ke perpustakaan
void tambahBuku() {
    if (jumlahBuku < MAX_BUKU) {
        Buku bukuBaru;
        bukuBaru.id = jumlahBuku + 1;
        printf("Masukkan judul buku: ");
        scanf(" %[^\n]s", bukuBaru.judul);
        bukuBaru.dipinjam = 0;
        
        perpustakaan[jumlahBuku] = bukuBaru;
        jumlahBuku++;
        
        printf("Buku berhasil ditambahkan dengan ID %d\n", bukuBaru.id);
    } else {
        printf("Kapasitas perpustakaan penuh!\n");
    }
}

// Fungsi untuk menampilkan daftar semua buku
void daftarBuku() {
    if (jumlahBuku == 0) {
        printf("Tidak ada buku dalam perpustakaan.\n");
        return;
    }

    printf("\nDaftar Buku:\n");
    for (int i = 0; i < jumlahBuku; i++) {
        printf("ID: %d, Judul: %s, Status: %s\n", 
               perpustakaan[i].id, 
               perpustakaan[i].judul, 
               perpustakaan[i].dipinjam ? "Dipinjam" : "Tersedia");
    }
}

// Fungsi untuk meminjam buku
void pinjamBuku() {
    int id;
    printf("Masukkan ID buku yang ingin dipinjam: ");
    scanf("%d", &id);

    for (int i = 0; i < jumlahBuku; i++) {
        if (perpustakaan[i].id == id) {
            if (perpustakaan[i].dipinjam) {
                printf("Buku sudah dipinjam.\n");
            } else {
                perpustakaan[i].dipinjam = 1;
                printf("Buku berhasil dipinjam.\n");
            }
            return;
        }
    }
    printf("Buku dengan ID %d tidak ditemukan.\n", id);
}

// Fungsi untuk mengembalikan buku
void kembalikanBuku() {
    int id;
    printf("Masukkan ID buku yang ingin dikembalikan: ");
    scanf("%d", &id);

    for (int i = 0; i < jumlahBuku; i++) {
        if (perpustakaan[i].id == id) {
            if (perpustakaan[i].dipinjam) {
                perpustakaan[i].dipinjam = 0;
                printf("Buku berhasil dikembalikan.\n");
            } else {
                printf("Buku tidak sedang dipinjam.\n");
            }
            return;
        }
    }
    printf("Buku dengan ID %d tidak ditemukan.\n", id);
}

int main() {
    int pilihan;
    
    while (1) {
        // Menu utama
        printf("\nSistem Manajemen Perpustakaan\n");
        printf("1. Tambah Buku\n");
        printf("2. Daftar Buku\n");
        printf("3. Pinjam Buku\n");
        printf("4. Kembalikan Buku\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        // Pemrosesan pilihan pengguna
        switch (pilihan) {
            case 1:
                tambahBuku();
                break;
            case 2:
                daftarBuku();
                break;
            case 3:
                pinjamBuku();
                break;
            case 4:
                kembalikanBuku();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Pilihan tidak valid\n");
        }
    }

    return 0;
}
