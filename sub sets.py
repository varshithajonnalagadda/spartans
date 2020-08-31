
n=int(input("enter no.of elements in a set"))
seta=[]
for i in range(n):
    i=int(input())
    seta.append(i)
subset=[]
for i in range(0,2**(len(seta))):
    h=[]
    for j in range(len(seta)):
         if((i&(1<<j))==(1<<j)):
             h.append(seta[j])
    subset.append(h)
print("subsets of given set is",subset)
             
