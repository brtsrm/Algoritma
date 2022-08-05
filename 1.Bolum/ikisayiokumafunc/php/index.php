<?php

$sayi1 = (int)readline("Bir sayı giriniz : ");
$sayi2 = (int)readline("İkinici sayı giriniz : ");

function topla(int $sayi1, int $sayi2)
{

    $g = $sayi1 + $sayi2;
    return $g;
}

$toplam = topla($sayi1, $sayi2);

printf("İki sayının toplamı %d dir", $toplam);
