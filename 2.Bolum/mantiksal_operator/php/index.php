<?php

function main()
{

    $t = readline();
    $z = readline();

    if ($t > 21)
        if ($z < 30)
            printf("Girilen sayı 22 ile 30 arasındadır . Girilen sayılar : %d , %d", $t, $z);
}

main();
