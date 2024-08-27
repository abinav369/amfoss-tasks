package main

import (
	"io/ioutil"
	"log"
)

func main() {
	content, err := ioutil.ReadFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = ioutil.WriteFile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/Go/output.txt", content, 0644)
	if err != nil {
		log.Fatal(err)
	}
}
