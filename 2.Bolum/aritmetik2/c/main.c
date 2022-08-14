#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 7, n = 7, k, z;
    k = ++m;
    z = n++;
    printf("%d, %d", k, z);
}