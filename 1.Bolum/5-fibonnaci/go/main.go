package main

import "fmt"

func main() {
	fibonnaci()
}

func fibonnaci() {
	var f1, f2 int = 5, 11
	var g int
	g = f1 + f2
	f1 = f2
	f2 = g
	fmt.Printf("%d", g)
}
