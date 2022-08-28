package main

import "fmt"

func main() {

	var N int
	var faktoriyel int = 1

	fmt.Printf("Bir sayi giriniz : ")
	fmt.Scanf("%d", &N)

	for k := 1; k < N; k++ {
		faktoriyel = faktoriyel * k
	}
	fmt.Printf("Hesaplanan = %d \n ", faktoriyel)

}
