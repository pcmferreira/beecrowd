l,c,x,y=map(int,input().split())
print(['Direita','Esquerda'][(x*c+y)&1])
