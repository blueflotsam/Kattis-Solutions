def harshad(num):
   x=list(str(num))
   r=0
   for i in x:
      r+=int(i)
   return r
j=int(input())
while(j%harshad(j)!=0):
   j+=1
print(j)