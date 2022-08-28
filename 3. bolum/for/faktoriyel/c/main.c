main()
{
    int k, N, faktriyel = 1;
    puts("Faktöriyel sayisi giriniz");
    scanf("%d", &N);
    for (k = 1; k < N; k++)
    {
        faktriyel *= k;
    }
    printf("Hesaplanla %d \n ",faktriyel);
}