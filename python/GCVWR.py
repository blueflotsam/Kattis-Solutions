
l1=input().split()
G=int(l1[0])
T=int(l1[1])
length=int(l1[2])
l2=input().split()
a=G-T
a=a*.9
for x in l2:
   a=a-int(x)
print(int(a))
