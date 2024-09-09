package main

import (
	"fmt"
	"strings"
)

func main() {
	var n int
	fmt.Print("Enter an odd number of rows for the diamond: ")
	fmt.Scanf("%d", &n)

	// Upper part including the middle row
	for i := 0; i <= n/2; i++ {
		fmt.Println(strings.Repeat(" ", (n/2)-i) + strings.Repeat("*", 2*i+1))
	}

	// Lower part (excluding the middle row)
	for i := n/2 - 1; i >= 0; i-- {
		fmt.Println(strings.Repeat(" ", (n/2)-i) + strings.Repeat("*", 2*i+1))
	}
}
