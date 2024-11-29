#include <stdio.h>
#include <string.h>

int main() {
    char nama[] = "BORLAND";
    int length = strlen(nama);

    printf("Output:\n");
    // Loop dari 1 hingga panjang string
    for (int i = 1; i <= length; i++) {
        // Mencetak substring dari belakang
        printf("%.*s\n", i, &nama[length - i]);
    }

    return 0;
}