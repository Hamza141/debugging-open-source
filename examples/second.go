package main

import "fmt"

func func2() {
	print("Inside func2\n")
}

func func1(val int) int {
	func2()
	val *= 2
	return val
}

func main() {
	out := func1(3)
	fmt.Printf("func1: %d\n", out)
}
