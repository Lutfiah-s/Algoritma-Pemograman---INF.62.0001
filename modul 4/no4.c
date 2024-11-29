/*sewa film bioskop*/
#include <stdio.h>

float biaya_rental(int durasi)
{
    float satu_jam_pertama = 15000;
    float jam_berikutnya = (durasi-1)*(0.5 * satu_jam_pertama);
    float total_bayar = satu_jam_pertama + jam_berikutnya;
return total_bayar;
}
int main()
{
    int durasi = 3;
    float total_sewa = biaya_rental(durasi);
    printf("Total yang harus dibayar jika seseorang menonton film dengan durasi %d jam adalah Rp %.2f\n",durasi,total_sewa);
return 0;
}
    


    

