main()
{
    int sayi, karesi;
    do
    {
        printf("Sayı giriniz : ");
        scanf("%d", &sayi);
        karesi = sayi * sayi;
        printf("Karesi = %d \n ", karesi);
    } while (sayi >= 0);
    printf("Program sonlandı");
    
}