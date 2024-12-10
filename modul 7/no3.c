// string password
#include <stdio.h>
#include <string.h>

int main() {
    // Mendefinisikan username dan password yang benar
    const char *usernameBenar = "sahira";
    const char *passwordBenar = "1sampai3";

    char username[50];
    char password[50];

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", username);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa username dan password
    if (strcmp(username, usernameBenar) == 0 && strcmp(password, passwordBenar) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}