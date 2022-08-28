<?php


function main()
{

    $para = 1000;
    $ay = 0;
    while ($para < 5000) {
        $para += $para * 0.08;
        $ay++;
    }
    printf("%d ay sonra toplam faiz orani %f", $ay, $para);
}

main();
