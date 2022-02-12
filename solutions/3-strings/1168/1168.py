l = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

n = int(input())

for _ in range(n):
    v = input()
    ans = sum([l[int(c)] for c in v])
    print(f'{ans} leds')
