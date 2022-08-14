<?php


function main()
{

    $m = 7;
    $n = 7;
    $k = $m++;
    $z = ++$n;

    return $k . " " . $z;
}

echo main();
