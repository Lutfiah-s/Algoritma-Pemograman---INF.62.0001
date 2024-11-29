// membuat pola segitiga bilangan
#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai : ");
    scanf ("%d", &nilai);

    // Loop untuk baris
    for (int i = 1; i <= nilai; i++) {
        // Loop untuk kolom
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n"); // Pindah ke baris berikutnya
    }
    return 0;
}