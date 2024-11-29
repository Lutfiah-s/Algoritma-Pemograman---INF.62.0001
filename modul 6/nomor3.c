//Membuat pola segitiga bintang
#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai : ");
    scanf ("%d", &nilai);

    //Loop
    for (int i = 1; i <= nilai; i++) {
        for (int j = 1; j <= i; j++){
          printf("*");  
        }
        printf("\n");        
    }
    return 0; 
}