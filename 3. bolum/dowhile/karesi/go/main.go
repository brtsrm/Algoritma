package main

import "fmt"

func main() {

	var sayi, karesi int
	for {
		fmt.Printf("Lütfen bir sayı giriniz ")
		fmt.Scanf("%d", &sayi)
		karesi = sayi * sayi
		fmt.Printf("Karesi = %d \n", karesi)
		if sayi <= 0 {
			break
		}
	}
	fmt.Println("Program sonlandı")

}
