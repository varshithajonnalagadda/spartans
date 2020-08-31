n=int(input("enter the num"))
b=bin(n)
b=b.replace("0b","")
new=b.replace("0","1")
g=int(new,2)
i=(g+1)/2
print("nearest num of power of 2 is",i)
