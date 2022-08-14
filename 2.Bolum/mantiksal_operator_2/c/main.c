#include <stdio.h>
#include <stdlib.h>

void main()
{
    int t, z;
    printf("iki sayi girin : ");
    scanf("%d, %d", &t, &z);
    if (t > 21 && z < 31)
        printf("Girilen sayi 22 ile 30 arasinda \n");

    puts("Bitti");
}