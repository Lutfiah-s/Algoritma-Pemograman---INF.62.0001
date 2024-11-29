/*menghitung volume dan luas permukaan bola*/
#include <stdio.h>

int main()
{
    float d = 12;
    const float Phi = 3.14;
    float r = d/2;
    float V = 4.0/3.0 * Phi * r * r * r;
    float L = 4.0 * Phi * r * r;

    printf("Volume : %.2f\n", V);
    printf("Luas Permukaan Bola: %.2f\n", L);

return 0;
}