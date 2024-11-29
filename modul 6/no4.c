#include <stdio.h>
#include <stdlib.h>

// Konstanta untuk saldo minimal
#define SALDO_MINIMAL 50000

// Struktur data untuk akun
typedef struct {
    char no_rekening[5];
    char nama[50];
    int saldo;
} Akun;

// Fungsi untuk menampilkan menu
void tampilkan_menu() {
    printf("\n===== MENU ATM =====\n");
    printf("1. Cek Saldo\n");
    printf("2. Setoran\n");
    printf("3. Penarikan Tunai\n");
    printf("4. Exit\n");
    printf("Pilih menu (1-4): ");
}

// Fungsi untuk cek saldo
void cek_saldo(Akun *akun) {
    printf("\n< CEK SALDO >\n");
    printf("No Rekening: %s\n", akun->no_rekening);
    printf("Nama: %s\n", akun->nama);
    printf("Saldo Anda saat ini: Rp. %d\n", akun->saldo);
}

// Fungsi untuk setoran 
void setoran(Akun *akun) {
    int jumlah_setoran;
    
    printf("\n< SETORAN >\n");
    printf("Masukkan jumlah setoran: Rp. ");
    scanf("%d", &jumlah_setoran);
    
    if (jumlah_setoran > 0) {
        akun->saldo += jumlah_setoran;
        printf("Setoran berhasil.\n");
        cek_saldo(akun);
    } else {
        printf("Jumlah setoran harus positif.\n");
    }
}

// Fungsi untuk penarikan
void penarikan(Akun *akun) {
    int jumlah_penarikan;
    
    printf("\n< PENARIKAN TUNAI >\n");
    printf("Masukkan jumlah penarikan: Rp. ");
    scanf("%d", &jumlah_penarikan);
    
    // Cek apakah penarikan akan membuat saldo kurang dari saldo minimal
    if (akun->saldo - jumlah_penarikan < SALDO_MINIMAL) {
        printf("Penarikan gagal. Saldo minimal yang harus disisakan adalah Rp. %d\n", SALDO_MINIMAL);
    } 
    // Cek apakah jumlah penarikan valid
    else if (jumlah_penarikan > 0 && jumlah_penarikan <= akun->saldo) {
        akun->saldo -= jumlah_penarikan;
        printf("Penarikan berhasil.\n");
        cek_saldo(akun);
    } 
    else {
        printf("Jumlah penarikan tidak valid.\n");
    }
}

int main() {
    // Inisialisasi akun
    Akun hattori = {
        .no_rekening = "0123",
        .nama = "Hattori",
        .saldo = 175000
    };
    
    int pilihan;
    
    printf("[ SELAMAT DATANG!!! ] \n");
    printf("No Rekening: %s\n", hattori.no_rekening);
    printf("Nama: %s\n", hattori.nama);
    
    // Loop utama program ATM
    while (1) {
        tampilkan_menu();
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1:
                cek_saldo(&hattori);
                break;
            
            case 2:
                setoran(&hattori);
                break;
            
            case 3:
                penarikan(&hattori);
                break;
            
            case 4:
                printf("Terima kasih telah menggunakan ATM. Sampai jumpa!\n");
                exit(0);
            
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    
    return 0;
}