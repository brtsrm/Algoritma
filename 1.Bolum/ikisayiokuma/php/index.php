<?php


// terminalden girilen sayıyı 
$sayi1 = (int)readline();
$sayi2 = (int)readline();


// ortalama
$toplam = (int)$sayi1 + $sayi2;
$ortalama = $toplam / 2;


printf("Ortalama = %f olarak hesaplandi", $ortalama);
