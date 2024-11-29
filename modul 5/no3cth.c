#include <stdio.h>
#include <math.h>
 
const M_PI;
float calculate_luas_bola(float r) 
{
   
    return 4 * M_PI * pow(r, 2);
}

float calculate_luas_kubus(float s) {
    return 6 * pow(s, 2);
}

float calculate_luas_balok(float p, float l, float t) {
    return 2 * (p * l + p * t + l * t);
}

float calculate_luas_tabung(float r, float t) {
    return 2 * M_PI * r * (r + t);
}

int main() {
    int choice;
    float r, s, p, l, t;

    printf("Rumus Luas Permukaan\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Pilih rumus: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Masukkan jari-jari bola: ");
            scanf("%f", &r);
            printf("Luas permukaan bola: %.2f\n", calculate_luas_bola(r));
            break;
        case 2:
            printf("Masukkan sisi kubus: ");
            scanf("%f", &s);
            printf("Luas permukaan kubus: %.2f\n", calculate_luas_kubus(s));
            break;
        case 3:
            printf("Masukkan panjang balok: ");
            scanf("%f", &p);
            printf("Masukkan lebar balok: ");
            scanf("%f", &l);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &t);
            printf("Luas permukaan balok: %.2f\n", calculate_luas_balok(p, l, t));
            break;
        case 4:
            printf("Masukkan jari-jari tabung: ");
            scanf("%f", &r);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &t);
            printf("Luas permukaan tabung: %.2f\n", calculate_luas_tabung(r, t));
            break;
        default:
            printf("Error: invalid choice!\n");
    }

    return 0;
}