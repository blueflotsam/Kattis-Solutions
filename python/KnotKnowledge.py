knots=input()
knotsList=input().split()
knotsLearned=input().split()
for x in knotsLearned:
   knotsList.remove(x)
print(knotsList[0])