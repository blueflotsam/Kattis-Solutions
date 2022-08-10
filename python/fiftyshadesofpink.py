import re

inputs=int(input())
answer=0
for x in range(inputs):
   str=input().lower()
   if len(re.findall("pink",str))>0 or len(re.findall("rose",str))>0:
      answer+=1
if answer==0:
   print ('I must watch Star Wars with my daughter')
else:
   print(answer)