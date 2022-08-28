<?php



function main()
{

    $faktoriyel = 1;
    $sayi = readline("Bir sayi giriniz : ");
    for ($i = 1; $i < $sayi; $i++) {
        $faktoriyel *= $i;
    }
    printf("Faktoriyel %d", $faktoriyel);
}

main();