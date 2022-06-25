package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	arr     [][]int
	visited []bool
	n       int
)

func initialized() {
	for i := 0; i < len(visited); i++ {
		visited[i] = false
	}
}

func dfs(v int) {
	visited[v] = true
	fmt.Print(v, " ")

	for i := 1; i <= n; i++ {
		if arr[v][i] == 1 && !visited[i] {
			dfs(i)
		}
	}
}

func bfs(v int) {
	visited[v] = true
	queue := []int{v}

	for len(queue) != 0 {
		front := queue[0]
		fmt.Print(front, " ")
		queue = queue[1:]

		for i := 0; i < len(arr[v]); i++ {
			if arr[front][i] == 1 && !visited[i] {
				visited[i] = true
				queue = append(queue, i)
			}
		}
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var m, v int
	fmt.Fscanln(reader, &n, &m, &v)

	arr = make([][]int, n+1)
	for i := range arr {
		arr[i] = make([]int, n+1)
	}

	visited = make([]bool, n+1)

	for i := 0; i < m; i++ {
		var x, y int
		fmt.Fscanln(reader, &x, &y)
		arr[x][y] = 1
		arr[y][x] = 1
	}

	dfs(v)
	initialized()
	fmt.Println()

	bfs(v)

}
