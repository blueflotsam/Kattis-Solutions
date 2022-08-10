str =input()
boo=False
for e in str:
   if boo:
      print(e, end="")
   elif e=='a':
      boo=True
      print(e, end="")