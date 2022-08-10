cpr=input()
list=[x for x in cpr]
value='432765-4321'
counter=0
answer=0
for v in value:
   if v!='-':
      answer+=int(v)*int(list[counter])
   counter+=1   
if answer % 11 == 0:
   print('1')
else:
   print('0')