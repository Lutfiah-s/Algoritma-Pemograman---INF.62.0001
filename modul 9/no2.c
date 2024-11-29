#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[1000];
    int panjang, i;

    printf("Kalimat Masukkan: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    panjang = strlen(kalimat);

    printf("Kebalikannya: ");
    for (i = panjang - 1; i >= 0; i--) {
        putchar(kalimat[i]);
    }

    printf("\n");
    return 0;
}