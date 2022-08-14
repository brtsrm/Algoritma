package main

import "fmt"

func main() {
	var tut int = 888
	var adr *int
	adr = &tut

	fmt.Printf("Degiskenin adresi : %p\n", &tut)
	fmt.Printf("Degiskenin degeri : %d\n\n", tut)
	fmt.Printf("Isaretcinin degeri (adres) : %p\n", adr)
	fmt.Printf("Isaret ettigi deger : %d\n\n", *adr)
	*adr = 444
	fmt.Printf("Degiskenin yeni degeri : %d\n", tut)
	fmt.Printf("DEgiskenin adresi : %p\n", &tut)
}
