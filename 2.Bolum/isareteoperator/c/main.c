main()
{
    int tut, *adr;
    adr = &tut;
    tut = 888;

    printf("Degiskenin adresi : %p\n", &tut);
    printf("Degiskenin degeri : %d\n\n", tut);
    printf("Isaretcinin degeri (adres) : %p\n", adr);
    printf("Isaret ettigi deger : %d\n\n", *adr);
    *adr = 444;
    printf("Degiskenin yeni degeri : %d\n", tut);
    printf("DEgiskenin adresi : %p\n", &tut);
}