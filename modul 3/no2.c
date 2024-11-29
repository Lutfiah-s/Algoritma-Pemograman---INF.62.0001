/*konversi suhu*/
#include <stdio.h>

int main ()
{
    float Kelvin,Fahrenheit,Reamur,C;
   
    printf("Input Suhu (Celsius): ");
    scanf("%f", &C);

    Kelvin = (C + 273.15);
    Fahrenheit = (C * 1.8) + 32;
    Reamur = (C * 0.8);

    printf("Suhu dalam Kelvin : %.2f\n",Kelvin);
    printf("Suhu dalam Fahrenheit : %.2f\n",Fahrenheit);
    printf("Suhu dalam Reamur : %.2f\n",Reamur);

    return 0;
}
