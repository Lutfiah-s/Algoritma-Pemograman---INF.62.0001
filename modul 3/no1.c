/*Konversi rupiah ke dollar*/
#include <stdio.h>

int main ()
{
    float Rupiah;
    float Dollar;
    const float Kurs = 14250;

    printf("Berapa dollar uang kamu?");
    scanf("%f", &Rupiah);
    Dollar = Rupiah/Kurs;

    printf("Uang saya dalam dolar adalah : %.2f", Dollar);

    return 0;
}