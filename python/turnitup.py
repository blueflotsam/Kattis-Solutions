count=int(input())
volume=7
for x in range(count):
   y=input()
   if y=='Skru op!':
      if volume!=10:
         volume+=1
   elif volume!=0:
      volume-=1
print(volume)    