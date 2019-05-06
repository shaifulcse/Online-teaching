
def avg(ls):
	sm=0.0	
	for i in range(len(ls)):
		sm+=ls[i]
	return sm/len(ls)	

fr=open("sample.txt","r")

#### read the header ####
fr.readline()

lines=fr.readlines()
players={}
for line in lines:
	line=line.strip()
	data=line.split("\t")
	pl=data[0]
	run=float(data[1])
	if pl not in players:
		players[pl]=[]

	players[pl].append(run)	
	
for player in players:
	average=avg(players[player])
	print player, average
