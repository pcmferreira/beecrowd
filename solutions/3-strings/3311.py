n = int(input())

sv = []

for i in range(n):
    sv += [input()]

sv.sort(key=(lambda x: ord(x[0])))

for s in sv:
    print(s)
