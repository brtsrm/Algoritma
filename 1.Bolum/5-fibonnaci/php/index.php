<?php



function fibonnaci()
{
    $f1 = 11;
    $f2 = 5;
    $g = $f1 + $f2;
    $f1 = $f2;
    $f2 = $g;
    echo $g;
}

function main()
{
    fibonnaci();
}

main();