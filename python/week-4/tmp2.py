values = [10, 20, 1, 1, 0, 5, 5,6,7,10]

max_run=20
tot=float(len(values))
count = [0.0]*21
for v in values:
	count[v]+=1
print count

cdf=[]

prev=0.0
for el in count:
	pr = (el/tot) + prev 	
	cdf.append(pr)
	prev = pr
print cdf

