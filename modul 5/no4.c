// Program Nilai Akhir Mahasiswa beserta Grade
#include <stdio.h>

int main() {
    float kehadiran, tugas, uts, uas, nilai_akhir;
    char grade;

    // Meminta input nilai dari pengguna
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &uas);

    // Menghitung nilai akhir
    nilai_akhir = 0.2 * kehadiran + 0.2 * tugas + 0.25 * uts + 0.35 * uas;

    // Menentukan nilai huruf
    if (nilai_akhir >= 91) {
        grade = 'A';
    } else if (nilai_akhir >= 86) {
        grade = 'A-';
    } else if (nilai_akhir >= 81) {
        grade = 'B+';
    } else if (nilai_akhir >= 76) {
        grade = 'B';
    } else if (nilai_akhir >= 66) {
        grade = 'B-';
    } else if (nilai_akhir >= 56) {
        grade = 'C';
    } else if (nilai_akhir >= 45) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menampilkan hasil
    printf("Nilai akhir Anda adalah: %.2f\n", nilai_akhir);
    printf("Nilai huruf Anda adalah: %c\n", grade);

    if (nilai_akhir <= 55) {
        printf("Maaf, Anda tidak lulus!\n");
    } else if (nilai_akhir <= 65) {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir <= 85) {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    }

    return 0;
}