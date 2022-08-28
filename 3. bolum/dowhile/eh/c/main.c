main()
{
    int a, b, toplam;
    char kr;
    do
    {
        puts("Toplanacak iki sayi girin : ");
        scanf("%d %d", &a, &b);
        toplam = a + b;
        printf("%d + %d = %d \n", a, b, toplam);
        puts("Tekrarlayacak misiniz ? (E/H)");
        kr = getch();
    } while (kr == 'h' && kr == 'H');
    puts("Program sonlandi");
}