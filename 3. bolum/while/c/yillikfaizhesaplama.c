main()
{
    float para = 1000;
    int ay = 0;
    while (para < 5000)
    {
        para += para * 0.08;
        ay++;

        printf("Ay : %d ,  Para : %f \n ", ay, para);
    }
    printf("Paraniz %d ay sonra %f tl olur.", ay, para);
}