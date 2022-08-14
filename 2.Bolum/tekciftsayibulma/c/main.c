#include <stdio.h>
#include <stdlib.h>
void main()
{
    int sayi, k;
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    k = sayi % 2;
    if (k == 0)
        printf("\n Cift sayi");
    else
        printf("\n Tek sayi");
    puts("\n Bitti");
}