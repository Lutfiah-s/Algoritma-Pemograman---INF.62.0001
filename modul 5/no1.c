#include <stdio.h>

void penjumlahan() {
    float a, b, c;
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);
    c = a + b;
    printf("Hasil penjumlahan: %.2f\n", c);
}

void pengurangan() {
    float a, b, c;
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);
    c = a - b;
    printf("Hasil pengurangan: %.2f\n", c);
}

void perkalian() {
    float a, b, c;
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);
    c = a * b;
    printf("Hasil perkalian: %.2f\n", c);
}

void pembagian() {
    float a, b, c;
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);
    if (b != 0) {
        c = a / b;
        printf("Hasil pembagian: %.2f\n", c);
    } else {
        printf("Error: tidak terdefinisi!\n");
    }
}

void hasil_bagi() {
    float a, b, c;
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);
    if (b != 0) {
        c = (int)a % (int)b;
        printf("Hasil bagi: %.0f\n", c);
    } else {
        printf("Error: tidak terdefinisi!\n");
    }
}

int main() {
    int choice;
    printf("Kalkulator Sederhana\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi\n");
    printf("Pilih operasi: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            penjumlahan();
            break;
        case 2:
            pengurangan();
            break;
        case 3:
            perkalian();
            break;
        case 4:
            pembagian();
            break;
        case 5:
            hasil_bagi();
            break;
        default:
            printf("Error: invalid choice!\n");
    }

    return 0;
}