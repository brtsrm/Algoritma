main()
{
    int x, y, toplam;
    printf("Birinci sayiyi giriniz : ");
    scanf("%d", &x);
    printf("Ikinci sayiyi giriniz : ");
    scanf("%d", &y);

    toplam = topla(x, y);

    printf("Iki sayinin toplami = %d dir", toplam);
}

int topla(int x, int y)
{

    int g;
    g = x + y;
    return g;
}