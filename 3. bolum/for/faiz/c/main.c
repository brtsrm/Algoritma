main()
{
    float para = 1000.0;
    int sene;
    for (sene = 1; sene <= 10; sene++)
        para += para * 0.75;
        
    printf("1000 tl %d yil sonra %f TL olur", sene, para);
}