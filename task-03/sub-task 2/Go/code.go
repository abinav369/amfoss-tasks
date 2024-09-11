package main

import (
	"log"
	"os"
)

func main() {
	// Read the file using os.ReadFile
	content, err := os.ReadFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt")
	if err != nil {
		log.Fatal(err)
	}

	// Write the file using os.WriteFile
	err = os.WriteFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/Go/output.txt", content, 0644)
	if err != nil {
		log.Fatal(err)
	}
}
