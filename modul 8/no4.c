#include <stdio.h>

// Fungsi untuk menghitung potongan diskon
float potong(float total) {
    if (total < 1000000) {
        return 0; // Tidak ada diskon
    } else if (total >= 1000000 && total < 3000000) {
        return total * 0.20; // Diskon 20%
    } else {
        return total * 0.35; // Diskon 35%
    }
}

int main() {
    float totalPembelian, diskon, totalBayar;

    // Input total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    // Menghitung diskon
    diskon = potong(totalPembelian);
    totalBayar = totalPembelian - diskon; // Menghitung total yang harus dibayarkan

    // Menampilkan hasil
    printf("Besar Diskon: Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan: Rp. %.2f\n", totalBayar);

    return 0;
}