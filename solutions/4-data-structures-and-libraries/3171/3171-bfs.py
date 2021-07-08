n, l = [int(i) for i in input().split()]

g = [[] for i in range(n)]

for i in range(l):
    x, y = [int(j) - 1 for j in input().split()]
    g[x] += [y]
    g[y] += [x]

visited = [False] * n

def bfs(root):
    q = [root]
    visited[root] = True
    while len(q) > 0:
        u = q.pop(0)
        for v in g[u]:
            if not visited[v]:
                visited[v] = True
                q += [v]

bfs(0)

print('COMPLETO' if sum(visited) == n else 'INCOMPLETO')
