package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	visited  []bool
	graph    [][]int
	computer int
	count    int
)

func dfs(v int) {
	visited[v] = true

	for i := 0; i < len(graph[v]); i++ {
		if graph[v][i] == 1 && !visited[i] {
			dfs(i)
			count++
		}
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var computer, connected int
	fmt.Fscanln(reader, &computer)
	fmt.Fscanln(reader, &connected)

	graph = make([][]int, computer+1)
	for i := range graph {
		graph[i] = make([]int, computer+1)
	}

	visited = make([]bool, computer+1)

	for i := 0; i < connected; i++ {
		var x, y int
		fmt.Fscanln(reader, &x, &y)
		graph[x][y] = 1
		graph[y][x] = 1
	}

	dfs(1)
	fmt.Fprint(writer, count)

}
