for t in range(int(input())):
 p=[list(map(float,input().split()))for i in' '*4];l=1;a=[0,0];b=[0,0]
 for i in[0,1]:
  m,n=p[i];r,s=p[i+2];x=(m+r)/2;d=s-n
  if d:a[i]=(m-r)/d;b[i]=(n+s)/2-a[i]*x
  else:l=i-1;z=x
 if l<1:x=z;y=a[l]*x+b[l]
 else:x=(b[1]-b[0])/(a[0]-a[1]);y=a[0]*x+b[0]
 print('Caso #{}: {:.2f} {:.2f}'.format(t+1,x,y))