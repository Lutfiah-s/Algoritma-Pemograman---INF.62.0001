#include <stdio.h>

int main() {
    // Bagian A
    int Lesley_A = 57082;
    int Layla_A = Lesley_A;
    int Balmond_A = Layla_A + 1;

    // Bagian B
    int Lesley_B = 57082;
    int *Layla_B = &Lesley_B; // Layla adalah pointer ke Lesley
    int Balmond_B = *Layla_B + 1;

    // Output hasil
    printf("Bagian A:\n");
    printf("a) Nilai Layla: %d\n", Layla_A);
    printf("b) Nilai Balmond: %d\n", Balmond_A);

    printf("\nBagian B:\n");
    printf("a) Nilai Layla: %d\n", *Layla_B); // Mengambil nilai dari pointer
    printf("b) Nilai Balmond: %d\n", Balmond_B);

    return 0;
}