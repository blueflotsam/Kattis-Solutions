input()
y=input()
z=y.split()
pos=0
ans=0
min=int(z[0])
for x in z:
   if(int(x)<min):
      min=int(x)
      ans=pos
   pos+=1
print (ans)