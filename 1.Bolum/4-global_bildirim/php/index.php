<?php



$m = 0;
$n = 0;

function main()
{

    global $m, $n;
    $m = 7;

    ikikat();
    printf("%d nin iki kat = %d dir", $m, $n);
}

function ikikat()
{
    global $m, $n;
    $n = $m * 2;
}


main();
