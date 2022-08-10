str=input()
s=str.split("()")
try:
   if s[0]==s[1]:
      print("correct")
   else:
      print("fix")
except:
   print("fix")