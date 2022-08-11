x=input()
y=input()
diff=0
if x[0]!=y[0]:
   diff+=1
if x[1]!=y[1]:
   diff+=1
if x[2]!=y[2]:
   diff+=1
if x[3]!=y[3]:
   diff+=1
print(int(2**diff))