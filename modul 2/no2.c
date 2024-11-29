/*membuat daftar nilai*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    /*membuat variable*/
    char Nama[13], NIM[8], Prodi[15], Fakultas[15];
    float NilaiPraktikum, NilaiUTS, NilaiUAS, NilaiAkhir;

    printf("Nama: ");
    fgets(Nama, sizeof(Nama), stdin);

    printf("NIM: ");
    fgets(NIM, sizeof(NIM), stdin);
    
    printf("Prodi: ");
    fgets(Prodi, sizeof(Prodi), stdin);

    printf("Fakultas :");
    fgets(Fakultas, sizeof(Fakultas), stdin);

    printf("Nilai Praktikum :");
    scanf("%f", &NilaiPraktikum);

    printf("Nilai UTS :");
    scanf("%f", &NilaiUTS);

    printf("Nilai UAS :");
    scanf("%f", &NilaiUAS);

    printf("Nilai Akhir:");
    scanf("%f", &NilaiAkhir);

    /*hitung nilai akhir*/
    NilaiAkhir = (0.30 * NilaiPraktikum) + (0.30 * NilaiUTS) + (0.40 * NilaiUAS);

    /*tampilkan hasilnya*/
    printf("\n-----------------------\n");
    printf("Nama: %s", Nama);
    printf("NIM: %s", NIM);
    printf("Prodi: %s", Prodi);
    printf("Fakultas: %s", Fakultas);
    printf("Nilai Praktikum: %.2f\n", NilaiPraktikum);
    printf("Nilai UTS: %.2f\n", NilaiUTS);
    printf("Nilai UAS: %.2f\n", NilaiUAS);
    printf("Nilai Akhir: %.2f\n", NilaiAkhir = (0.30 * NilaiPraktikum) + (0.30 * NilaiUTS) + (0.40 * NilaiUAS));

    return 0;
}