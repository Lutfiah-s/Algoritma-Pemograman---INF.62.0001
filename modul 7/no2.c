// Array data mahasiswa
#include <stdio.h>

int main() {
    int jumlahMahasiswa; // Variabel untuk menyimpan jumlah mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Membuat array untuk menyimpan nama mahasiswa
    char namaMahasiswa[jumlahMahasiswa][100]; // Asumsi maksimal panjang nama adalah 99 karakter

    // Input nama mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", namaMahasiswa[i]); // Membaca string dengan spasi
    }

    // Menampilkan nama mahasiswa
    printf("\nDaftar nama mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}