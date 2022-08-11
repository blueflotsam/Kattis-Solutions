n=int(input())
while n!=-1:
   graph=[]
   truthTable=[]
   for count in range(n):
      graph.append(input().replace(" ",""))
      truthTable.append(True)
   for i in range(n):
      for j in range(n):
         if truthTable[i]==False:
            break
         if graph[i][j]=='1':
            for k in range(n):
               if graph[i][k]==graph[j][k] and graph[i][k]=='1':
                  truthTable[i]=False
                  truthTable[j]=False
                  break
   output=''
   for truth in range(n):
      if truthTable[truth]:
         if len(output)!=0:
            output+=' '+str(truth)
         else:
            output+=str(truth)
   print(output)         
            
   
   n=int(input())
      