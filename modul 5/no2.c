//program TOSERBA//
#include <stdio.h>

float jumlah_diskon(float total_belanja) {
    float discount = 0;
    if (total_belanja <= 75000) {
        discount = (total_belanja * 0.05);
    } else 
    if (total_belanja > 75000 && total_belanja <= 125000) {
        discount = (total_belanja * 0.15);
    } else 
    if (total_belanja > 125000) {
        discount = (total_belanja * 0.25) + 5000;
    }
    return discount;
}

int main() {
    float total_belanja, discount, total_payment;

    printf("TOSERBA\n");
    printf("Masukkan total pembelian: ");
    scanf("%f", &total_belanja);

    discount = jumlah_diskon(total_belanja);
    total_payment = total_belanja - discount;

    printf("Total pembelian: Rp %.2f\n", total_belanja);
    printf("Diskon: Rp %.2f\n", discount);
    printf("Total pembayaran: Rp %.2f\n", total_payment);

    return 0;
}