//membuat deret bilangan genap dan ganjil
#include <stdio.h>

int main() 
{
    int i;

    // Deret bilangan genap 
    printf("Deret bilangan genap dari 0 hingga 50:\n");
    for (i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n\n"); // jarak antar output

    // Deret bilangan ganjil 
    printf("Deret bilangan ganjil dari 0 hingga 50:\n");
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }
    return 0;
}