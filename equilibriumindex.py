a=[]
n=int(input('enter number'))
for d in range(n):
    c=int(input('enter number'))
    a.append(c)
l=0
r=0
x=int(n/2)
for i in range(0,x):
    l=l+a[i]
for j in range(x+1,n):
    r=r+a[j]
if l==r:
    print(x+1)
else:
    print(-1)
