package main

import "fmt"

func main() {

	var n, m int
	var toplam int
	var ortalama float64
	fmt.Print("İki sayi giriniz \n")
	fmt.Scanf("%d ", &n)
	fmt.Scanf("%d ", &m)
	toplam = n + m
	ortalama = float64(toplam) / 2
	fmt.Printf("Ortalama = %f olarak hesaplandi", ortalama)

}
