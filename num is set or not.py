n=int(input("enter bin number:"))
i=int(input("enter the position:"))
if(n&(1<<(i-1))):
    print("it is a set")
else:
        print("it is not a set")
