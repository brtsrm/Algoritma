<?php


function main()
{

    $k = 1;
    $toplam = 0;
    while (1) {
        $sayi = readline("Sayı giriniz : ");
        if ($sayi == -1)
            break;
        $k++;
    }
    $ortalama = $toplam / $k;
    printf("%d sayisini ortalamasi = %f \n",$k,$ortalama);
}

main();