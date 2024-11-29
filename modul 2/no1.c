/*membuat input nama*/
#include <stdio.h>
#include <string.h>
int main()
{ 
    char nama[31];
    printf("Hello, siapa nama lengkapmu?\n");
    scanf("%[^\n]s", nama);
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);
   return 0;
}