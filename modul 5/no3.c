// Program Logika Switch Case
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int pilihan;
    float sisi, panjang, lebar, tinggi, jari_jari, luas;

    printf("Pilih bangun ruang:\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan jari-jari bola: ");
            scanf("%f", &jari_jari);
            luas = 4 * PI * pow(jari_jari, 2);
            printf("Luas permukaan bola: %.2f satuan luas\n", luas);
            break;
        case 2:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            luas = 6 * pow(sisi, 2);
            printf("Luas permukaan kubus: %.2f satuan luas\n", luas);
            break;
        case 3:
            printf("Masukkan panjang, lebar, dan tinggi balok: ");
            scanf("%f %f %f", &panjang, &lebar, &tinggi);
            luas = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
            printf("Luas permukaan balok: %.2f satuan luas\n", luas);
            break;
        case 4:
            printf("Masukkan jari-jari alas dan tinggi tabung: ");
            scanf("%f %f", &jari_jari, &tinggi);
            luas = 2 * PI * jari_jari * (jari_jari + tinggi);
            printf("Luas permukaan tabung: %.2f satuan luas\n", luas);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}