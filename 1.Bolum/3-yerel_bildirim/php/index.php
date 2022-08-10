<?php


function main()
{
    $m = 7;
    $n = ikikat($m);
    printf("%d nin iki kati = %d", $m, $n);
}

function ikikat($m): int
{

    $gecici = $m * 2;
    return $gecici;
}

main();
