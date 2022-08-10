j=int(input())
days=set()
for x in range(j):
   t=list(map(int,input().split()))
   t[1]+=1
   for y in range(t[0],t[1]):
      days.add(y)
print (len(days))