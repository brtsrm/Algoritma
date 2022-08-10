package main

import "fmt"

func main() {

	var x, y int
	var toplam int

	fmt.Print("Birinci sayıyı giriniz : ")
	fmt.Scanf("%d ", &x)

	fmt.Print("İkinci sayıyı giriniz : ")
	fmt.Scanf("%d ", &y)
	toplam = topla(x, y)

	fmt.Printf("İki sayının toplamı %d", toplam)
}

func topla(sayi1 int, sayi2 int) int {

	var g int
	g = sayi1 + sayi2
	return g

}
