package main

import "fmt"

func main() {
	var para float64 = 1000
	var ay int = 0

	for para < 5000 {
		para += para * 0.08
		ay++
	}
	fmt.Printf("Paraniz %d ay sonra %f tl olur", ay, para)
}
