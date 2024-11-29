/*program menghitung rata-rata nilai mahasiswa*/

#include <stdio.h> 

void main() { 
// membuat array dari nilai mahasiswa
int nilai_mahasiswa[20] = {100, 80, 85, 87, 89, 97, 96, 95, 100, 99, 89, 100, 85, 86, 40, 50, 75, 80, 90, 91 }; 

// length itu sama dengan n 
int length = sizeof(nilai_mahasiswa) / sizeof(*nilai_mahasiswa); 
int sum = 0; 
for(int i = 0; i < length; i++){ 
sum += nilai_mahasiswa[i]; 
} 
// rata-rata nilai mahasiswa 
float rata_rata = (float)sum / (float)length; 
printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata); 
} 
