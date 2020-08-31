n=int(input("enter  num"))
count=0
while(n):
    n=n&(n-1)
    count=count+1
print("count is",count)
    
