package main

import "fmt"

func main() {

	var sayi, k int
	fmt.Println("Lütfen bir sayı giriniz  ")
	fmt.Scanf("%d", &sayi)
	k = sayi % 2
	if k == 0 {
		fmt.Printf("Çift sayı")
	} else {
		fmt.Printf("Tek sayı")
	}

}
