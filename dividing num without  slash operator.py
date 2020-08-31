dividend=int(input('enter the dividend'))
divisor=int(input('enter the divisior'))
q=0
var=0
for i in range(31,-1,-1):
    if (var+divisor<<i)<=dividend:
        var=var+divisor<<i
        q=q|(1<<i)
 print("quotient",q)
