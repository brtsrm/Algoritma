main()
{
    int m, n;
    m = 7;
    n = ikikat(m);
    printf("%d nin iki kati = %d dir", m, n);
}
int ikikat(int k)
{
    int gecici;
    gecici = k * 2;
    return gecici;
}
