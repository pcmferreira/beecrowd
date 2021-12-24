f,e,c=map(int,input().split())
v=f+e
x=0
while v>=c:x+=v//c;v=v//c+v%c
print(x)
