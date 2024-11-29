#include <stdio.h>

//fungsi rekursif untuk mengalikan 2 buah bilangan
int perkalian(int a, int b) {
    
    if (b == 0) {
        return 0;
    }
    return a + perkalian(a, b - 1);
}

int main(){
    int x, y;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &x);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &y);
    
    if (x < 0 || y < 0) {
        printf("ERROR: Kedua bilangan harus bilangan bulat positif atau 0 , coba lagi!\n");
        return 1;
    }

    int hasil = perkalian(x, y);
    printf("Hasil dari %d x %d = %d\n", x, y, hasil);

    return 0;
}