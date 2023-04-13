class player:
   def __init__(self, number, hand):
      self.number=number
      self.hand=hand

i=input().split()
syllables=int(i[0])
players=int(i[1])
playerList=[]
for x in range(players):
   p=player(x+1,'folded')
   playerList.append(p)
position =-1
while len(playerList)!=1:
   position +=syllables
   while position>=len(playerList):
      position-=len(playerList)
   
   h=playerList[position].hand
   if h=='folded':
      playerList[position].hand='fist'
      p=player(playerList[position].number, 'fist')
      playerList.insert(position+1, p)
      position-=1
   elif h=='fist':
      playerList[position].hand='palm'
   elif h=='palm':
      del playerList[position]
      position-=1
      
print (playerList[0].number)