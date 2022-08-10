package main

import "fmt"

func main() {

	var m, n int
	m = 7
	n = ikikat(m)
	fmt.Printf("%d nin iki kati = %d dir", m, n)

}

func ikikat(m int) int {

	var gecici int
	gecici = m * 2
	return gecici

}
