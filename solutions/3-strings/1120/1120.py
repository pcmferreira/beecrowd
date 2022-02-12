while True:
    d, n = input().split()
    if d == '0': break
    print(n.replace(d, '').lstrip('0') or '0')
