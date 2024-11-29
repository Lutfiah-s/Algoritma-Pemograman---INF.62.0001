/*membuat konversi detik, menit, beserta sisa detik*/
#include <stdio.h>

int main()
{
    int Jam;
    int Menit;
    int Detik;
    printf("Masukan jumlah waktu dalam detik: ");
    scanf("%d", &Detik);
    Jam = Detik/3600;
    Menit = (Detik / 60) % 60;
    Detik = Detik % 60;
    printf("%d Jam, %d Menit, %d Detik\n", Jam,Menit,Detik);
    return 0;
}