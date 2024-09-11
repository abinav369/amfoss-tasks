package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {
	data, err := os.ReadFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt")
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}

	n := int(data[0] - '0')

	var output string

	for i := 0; i <= n/2; i++ {
		output += strings.Repeat(" ", (n/2)-i) + strings.Repeat("*", 2*i+1) + "\n"
	}

	for i := n/2 - 1; i >= 0; i-- {
		output += strings.Repeat(" ", (n/2)-i) + strings.Repeat("*", 2*i+1) + "\n"
	}

	err = os.WriteFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Go/output.txt", []byte(output), 0644)
	if err != nil {
		fmt.Println("Error writing file:", err)
		return
	}
}
