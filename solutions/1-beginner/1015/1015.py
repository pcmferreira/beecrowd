import math

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

dx = x1 - x2
dy = y1 - y2

ans = math.sqrt(dx * dx + dy * dy)

print('{:.4f}'.format(ans))
