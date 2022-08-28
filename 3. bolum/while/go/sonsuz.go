package main

import "fmt"

func main() {

	var sayi, toplam int
	var ortalama float64
	var k float64 = 1

	for {
		fmt.Printf("%d Sayisi giriniz : ", &sayi)
		fmt.Scanf("%d", &sayi)
		if sayi == -1 {
			break
		}
		k++

	}
	ortalama = float64(toplam) / k

	fmt.Printf(" %f sayinin ortalamasi = %f \n", k, ortalama)

}
