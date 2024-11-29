/*program kasir barang*/
#include <stdio.h>

int main(){
   
   char pembeli[64], namabarang[64];
   int hargaSatuan, jumlahBarang, total;

   printf("Nama pembeli: ");
   scanf(" %63[^\n]s", pembeli);

   printf("Nama barang: ");
   scanf(" %63[^\n]s" ,namabarang);
   
   printf("Harga satuan: ");
   scanf(" %d", &hargaSatuan);

   printf("Jumlah barang: ");
   scanf(" %d", &jumlahBarang);
    
   total = (hargaSatuan *jumlahBarang);
   printf("Nama pembeli    : %s\n", pembeli);
   printf("Nama barang     : %s\n", namabarang);
   printf("Harga barang Satuan    : %d\n", hargaSatuan);
   printf("Jumlah Barang   : %d\n", jumlahBarang);
   printf("Harga total    : %d\n", total);

}