def dfs(graph, start):
    visited = []
    stack = [start]
    
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.append(node)
            neighbours = graph[node]
            for neighbour in neighbours:
                if neighbour not in visited:
                    stack.append(neighbour)
    
    return visited

# Contoh penggunaan DFS Iteratif
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

print("Hasil DFS (Iteratif):", dfs(graph, 'A'))
