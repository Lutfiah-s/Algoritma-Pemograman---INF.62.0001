// Pehitungan Aritmatika
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, hasil;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    hasil = a + b;
    printf("Hasil penjumlahan: %.2f\n", hasil);
            
    hasil = a - b;
    printf("Hasil pengurangan: %.2f\n", hasil);
        
    hasil = a * b;
    printf("Hasil perkalian: %.2f\n", hasil);
        
    if (b==0){
        printf("Pembagian dengan nol tidak terdefinisi.\n");
    } else {
        hasil = a / b;
        printf("Hasil pembagian: %.2f\n", hasil);
    }
}