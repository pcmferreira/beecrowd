def r(p1, p2):
    x1, y1 = p1
    x2, y2 = p2

    dx = x2 - x1
    dy = y2 - y1

    x = (x1 + x2) / 2
    y = (y1 + y2) / 2

    if dy == 0: return float('INF'), x

    a = -dx / dy
    b = y - a * x

    return a, b

def c(r1, r2):
    a1, b1 = r1
    a2, b2 = r2

    if a1 == float('INF'): return b1, a2 * b1 + b2
    if a2 == float('INF'): return b2, a1 * b2 + b1

    x = (b2 - b1) / (a1 - a2)
    y = a1 * x + b1
    return x, y

t = int(input())

for i in range(1, t + 1):
    p = []
    for j in range(4):
        x, y = map(float, input().split())
        p.append([x, y])
    r1 = r(p[0], p[2])
    r2 = r(p[1], p[3])
    x, y = c(r1, r2)
    print('Caso #{}: {:.2f} {:.2f}'.format(i, x, y))
