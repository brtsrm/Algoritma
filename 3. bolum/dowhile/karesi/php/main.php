<?php



do {

    $sayi = readline("Lütfen bir sayı giriniz ");
    $karesi = $sayi * $sayi;
    printf("%d Sayini karesi %d", $sayi, $karesi);
} while ($sayi >= 0);
echo "Program sonlandırıldı";
