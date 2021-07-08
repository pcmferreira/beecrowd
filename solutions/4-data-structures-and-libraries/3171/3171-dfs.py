n, l = [int(i) for i in input().split()]

g = [[] for i in range(n)]

for i in range(l):
    x, y = [int(j) - 1 for j in input().split()]
    g[x] += [y]
    g[y] += [x]

visited = [False] * n

def dfs(u):
    if visited[u]: return
    visited[u] = True
    for v in g[u]:
        dfs(v)

dfs(0)

print('COMPLETO' if sum(visited) == n else 'INCOMPLETO')
