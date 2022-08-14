<?php

function main()
{
    $sayi = readline("Lütfen bir sayı giriniz : ");
    $k = $sayi % 2;
    $cikti = "";
    if ($k == 0) {
        $cikti = "Çift sayı";
    } else {
        $cikti = "Tekd sayı";
    }
    return $cikti;
}


echo main();
