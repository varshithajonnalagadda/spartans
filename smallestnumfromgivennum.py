
n=int(input('enter number'))
a=[]
while n:
    digit=n%10
    a.append(digit)
    n=int(n/10)
a.sort()
if a[0]==0:
    for i in range(len(a)):
        if a[0]<a[i]:
            a[0],a[i]=a[i],a[0]
            break
for j in a:
    print(j,end='')
