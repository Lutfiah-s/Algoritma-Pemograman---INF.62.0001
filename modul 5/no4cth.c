#include <stdio.h>

int main() {

    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (nilai_kehadiran * 0.2) + (nilai_tugas * 0.2) + (nilai_uts * 0.25) + (nilai_uas * 0.35);

    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        printf("Grade: E\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        printf("Grade: D\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        printf("Grade: C\n");
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        printf("Grade: B-\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        printf("Grade: B\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        printf("Grade: B+\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        printf("Grade: A-\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        printf("Grade: A\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    }

    return 0;
}