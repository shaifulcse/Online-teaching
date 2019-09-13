import os

base_path="data/mushfiq/"

list_files=os.listdir(base_path)
count=0
for file in list_files:
	fr=open(base_path+file,"r")

	### ignore header
	line=fr.readline()
	while 1:
		line=fr.readline().strip()
		if len(line)<3:
			break
		if "run out" in line:
			print line
			count+=1

	fr.close()
print count
