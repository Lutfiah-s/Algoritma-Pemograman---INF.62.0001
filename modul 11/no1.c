#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n, i;
    char nama[50], nim[15], fakultas[50], jurusan[50], program_studi[50];

    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Maaf kamu gagal membuka file\n");
        return 1;
    }

    printf("Berapa banyak data mahasiswa nihh yang mau kamu inputkan? ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        printf("\nMasukan data mahasiswa ke-%d\n", i);
        printf("Nama           : ");
        fgets(nama, sizeof(nama), stdin);
        printf("NIM            : ");
        fgets(nim, sizeof(nim), stdin);
        printf("Fakultas       : ");
        fgets(fakultas, sizeof(fakultas), stdin);
        printf("Jurusan        : ");
        fgets(jurusan, sizeof(jurusan), stdin);
        printf("Program Studi  : ");
        fgets(program_studi, sizeof(program_studi), stdin);

        fprintf(file, "Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama             : %s", nama);
        fprintf(file, "NIM              : %s", nim);
        fprintf(file, "Fakultas         : %s", fakultas);
        fprintf(file, "Jurusan          : %s", jurusan);
        fprintf(file, "Program Studi    : %s", program_studi);
        fprintf(file, "------------------------------------------------------------------\n");
    }

    printf("\nData berhasil disimpan ke dalam file 'datamahasiswa.txt'.\n");

    fclose(file);
    return 0;
}