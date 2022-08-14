package main

import "fmt"

func main() {
	var t, z int
	fmt.Scanf("%d", &t)
	fmt.Scanf("%d", &z)

	if t > 21 && z < 30 {
		fmt.Printf("Girilen sayılar 22 ile 30 arasında \n Girilen sayılar : %d , %d ", t, z)
	}

}
