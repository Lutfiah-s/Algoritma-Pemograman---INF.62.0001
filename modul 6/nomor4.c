// membuat program atm sederhana
#include <stdio.h>
#include <stdlib.h>

// Konstanta untuk saldo minimal
#define SALDO_MINIMAL 50000

// Fungsi untuk menampilkan menu
void tampilkan_menu() {
    printf("\n[ MENU ATM ]\n");
    printf("1. Cek Saldo\n");
    printf("2. Setoran\n");
    printf("3. Penarikan Tunai\n");
    printf("4. Exit\n");
    printf("Pilih menu (1-4): ");
}

// Fungsi untuk cek saldo
void cek_saldo(int saldo) {
    printf("\n<< CEK SALDO >>\n");
    printf("Saldo Anda saat ini: Rp. %d\n", saldo);
}

// Fungsi untuk setoran
int setoran(int saldo) {
    int jumlah_setoran;
    
    printf("\n<< SETORAN >>\n");
    printf("Masukkan jumlah setoran: Rp. ");
    scanf("%d", &jumlah_setoran);
    
    if (jumlah_setoran > 0) {
        saldo += jumlah_setoran;
        printf("Setoran berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
    } else {
        printf("Jumlah setoran harus positif.\n");
    }
    
    return saldo;
}

// Fungsi untuk penarikan
int penarikan(int saldo) {
    int jumlah_penarikan;
    
    printf("\n<< PENARIKAN TUNAI >>\n");
    printf("Masukkan jumlah penarikan: Rp. ");
    scanf("%d", &jumlah_penarikan);
    
    // Cek apakah penarikan akan membuat saldo kurang dari saldo minimal
    if (saldo - jumlah_penarikan < SALDO_MINIMAL) {
        printf("Penarikan gagal. Saldo minimal yang harus disisakan adalah Rp. %d\n", SALDO_MINIMAL);
    } 
    // Cek apakah jumlah penarikan valid
    else if (jumlah_penarikan > 0 && jumlah_penarikan <= saldo) {
        saldo -= jumlah_penarikan;
        printf("Penarikan berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
    } 
    else {
        printf("Jumlah penarikan tidak valid.\n");
    }
    
    return saldo;
}

int main() {
    // Inisialisasi saldo awal
    int saldo = 175000;
    int pilihan;
    
    // No Rekening dan Nama
    char no_rekening[] = "0123";
    char nama[] = "Hattori";
    
    printf("!!!! SELAMAT DATANG !!!!\n");
    printf("No Rekening: %s\n", no_rekening);
    printf("Nama: %s\n", nama);
    
    // Loop utama program ATM
    while (1) {
        tampilkan_menu();
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1:
                cek_saldo(saldo);
                break;
            
            case 2:
                saldo = setoran(saldo);
                break;
            
            case 3:
                saldo = penarikan(saldo);
                break;
            
            case 4:
                printf("Terima kasih telah menggunakan ATM. Semoga Berkah!\n");
                exit(0);
            
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    
    return 0;
}