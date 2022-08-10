package main

import "fmt"

var m, n int

func main() {
	m = 7
	ikikat()
	fmt.Printf("%d nin iki kati = %d", m, n)
}

func ikikat() {
	n = m * 2
}
