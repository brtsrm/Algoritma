main()
{
    fibonnaci();
}
int fibonnaci()
{
    static int f1 = 5, f2 = 11;
    int g;
    g = f1 + f2;
    f1 = f2;
    f2 = g;
    printf("%d", g);
}