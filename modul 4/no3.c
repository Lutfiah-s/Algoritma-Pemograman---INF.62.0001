/*nilai akhir praktikum*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char nama[100],prodi[100],NIM[10];
    const float nilai_presensi = 85, nilai_praktek = 65, nilai_uts = 80, nilai_uas = 75;
    float nilai_akhir;

    printf("Nama: ");
    scanf("%s", nama);

    printf("NIM: ");
    scanf("%s", NIM);

    printf("Prodi: ");
    scanf("%s", prodi);

    nilai_akhir = (0.10 * nilai_presensi) + (0.20 * nilai_praktek) + (0.30 * nilai_uts) + (0.40 * nilai_uas);
    
    printf("\n-----------------------\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", NIM);
    printf("Prodi: %s\n", prodi);
    printf("Nilai Presensi : %.2f\n",nilai_presensi);
    printf("Nilai Praktek : %.2f\n",nilai_praktek);
    printf("Nilai UTS : %.2f\n",nilai_uts);
    printf("Nilai UAS : %.2f\n",nilai_uas);
    printf("Nilai Akhir : %.2f\n",nilai_akhir);

    return 0;
}