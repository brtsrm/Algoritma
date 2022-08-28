main()
{

    unsigned int sayi, toplam, k = 1;
    float ortalama;
    while (1)
    {
        printf("Sayi giriniz : ");
        scanf("%d", &sayi);
        if (sayi == -1)
            break;
        k++;
    }
    ortalama = (float)toplam / k;
    printf("%d sayinin ortalamasi = %f \n ", k, ortalama);
}