main()
{
    int k, kare;
    for (k = 1; k <= 100; k += 50)
    {
        kare = k * k;
        printf("%d sayinin karesi = %d dir. \n", k, kare);
        puts("Cevrim suruyor \n");
    }
    printf("Cevrim sonlandi");
}