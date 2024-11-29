#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nomorKomputer, tebakan, percobaan;
    char lagi;

    printf("\n---Selamat Datang dipermainan Tebak Angka Sahira!---\n");

    // Inisialisasi generate nomor acak
    srand(time(NULL));

    do {
        // Komputer memilih nomor acak antara 1 dan 20
        nomorKomputer = rand() % 20 + 1;
        percobaan = 0;

        printf("Saya telah memilih nomor antara 1 dan 20. Coba tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan < nomorKomputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomorKomputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Jumlah percobaan anda : %d\n", percobaan);
            }
        } while (tebakan != nomorKomputer);

        // Tanya apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &lagi); 

    } while (lagi == 'y' || lagi == 'Y');

    printf("Terima kasih telah bermain bersama Sahira!\n");
    return 0;
}