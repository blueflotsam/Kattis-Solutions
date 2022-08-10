import math
input=list(map(int, input().split()))
x=0
y=0
if(input[0]>=input[2] and input[0]<=input[4]):
   x=0
else:
   if(input[0]>input[4]):
      x=int(input[0])-int(input[4])
   else:
      x=int(input[2])-int(input[0])
if(input[1]>=input[3] and input[1]<=input[5]):
   y=0
else:
   if(input[1]>input[5]):
      y=int(input[1])-int(input[5])
   else:
      y=int(input[3])-int(input[1])
print (math.sqrt(x**2+y**2))