#include <stdio.h>
#define PI 3.14 // Menggunakan π ≈ 3.14

// Fungsi untuk menghitung luas lingkaran
float luas(float jariJari) {
    return PI * jariJari * jariJari; 
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float jariJari) {
    return 2 * PI * jariJari; 
}

int main() {
    float jariJari;

    // Input jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);
        if (jariJari<= 0) {
        printf("ERROR: jari-jari harus besar dari 0! \n");
        return 1;
    }


    // Menghitung dan menampilkan luas dan keliling
    printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", jariJari, luas(jariJari));
    printf("Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n", jariJari, keliling(jariJari));

    return 0;
}