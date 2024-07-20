def dfs_recursive(graph, node, visited=None):
    if visited is None:
        visited = []
    if node not in visited:
        visited.append(node)
        for neighbour in graph[node]:
            if neighbour not in visited:
                dfs_recursive(graph, neighbour, visited)
    return visited

# Contoh penggunaan DFS Rekursif
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

print("Hasil DFS (Rekursif):", dfs_recursive(graph, 'A'))
