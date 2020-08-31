n=int(input("enter num"))
b=bin(n)
b=b.replace("0b","")
new=b.replace("0","1")
g=int(new,2)
u=(g+1)/2
for i in range(10):
    if((2**i)==u):
        j=i
j=j+1 
print( "msd is",j)
