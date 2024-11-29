#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

typedef struct {
    char nim[10];
    char nama[50];
    char tglLahir[15];
    char alamat[50];
    char hp[15];
} Mahasiswa;

int main() {
    Mahasiswa dataMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;
    char pilihan;

    do {
        // Masukkan data mahasiswa
        printf("Masukkan data mahasiswa ke-%d:\n", jumlahMahasiswa + 1);
        printf("NIM       : ");
        scanf(" %[^\n]", dataMahasiswa[jumlahMahasiswa].nim);
        printf("NAMA      : ");
        scanf(" %[^\n]", dataMahasiswa[jumlahMahasiswa].nama);
        printf("TGL LAHIR : ");
        scanf(" %[^\n]", dataMahasiswa[jumlahMahasiswa].tglLahir);
        printf("ALAMAT    : ");
        scanf(" %[^\n]", dataMahasiswa[jumlahMahasiswa].alamat);
        printf("HP        : ");
        scanf(" %[^\n]", dataMahasiswa[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        printf("Mau memasukkan data lagi ga [y/t]? ");
        scanf(" %c", &pilihan);
    } while ((pilihan == 'y' || pilihan == 'Y') && jumlahMahasiswa < MAX_MAHASISWA);

    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%s %s %s %s %s\n", dataMahasiswa[i].nim, dataMahasiswa[i].nama, 
               dataMahasiswa[i].tglLahir, dataMahasiswa[i].alamat, dataMahasiswa[i].hp);
    }

    return 0;
}
