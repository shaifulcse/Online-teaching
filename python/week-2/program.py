import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_subplot(111)

fr=open("stats/bangladesh/tamim/years/all.txt","r")

line=fr.readline()

lines=fr.readlines()
tamim_years=[]
tamim_avgs=[]
for line in lines:
	data=line.strip().split("\t")
	year=data[0].strip()
	avg=data[9].strip()
	if year.isdigit():
		tamim_years.append(int(year))
		tamim_avgs.append(float(avg))


fr=open("stats/bangladesh/mushfiq/years/all.txt","r")

line=fr.readline()

lines=fr.readlines()
mushfiq_years=[]
mushfiq_avgs=[]
for line in lines:
	data=line.strip().split("\t")
	year=data[0].strip()
	avg=data[9].strip()
	if year.isdigit():
		mushfiq_years.append(int(year))
		mushfiq_avgs.append(float(avg))

fr=open("stats/bangladesh/mahmudullah/years/all.txt","r")

line=fr.readline()

lines=fr.readlines()
mahmud_years=[]
mahmud_avgs=[]
for line in lines:
	data=line.strip().split("\t")
	year=data[0].strip()
	avg=data[9].strip()
	if year.isdigit():
		mahmud_years.append(int(year))
		mahmud_avgs.append(float(avg))

fr=open("stats/india/kohli/years/all.txt","r")

line=fr.readline()

lines=fr.readlines()
kohli_years=[]
kohli_avgs=[]
for line in lines:
	data=line.strip().split("\t")
	year=data[0].strip()
	avg=data[9].strip()
	if year.isdigit():
		kohli_years.append(int(year))
		kohli_avgs.append(float(avg))



plt.plot(tamim_years, tamim_avgs, ls="--")
plt.plot(mushfiq_years, mushfiq_avgs, ls ="-")
plt.plot(mahmud_years, mahmud_avgs, ls =":")
plt.plot(kohli_years, kohli_avgs, ls ="-.")

plt.xlabel('Year',fontsize=18)
plt.ylabel('Average runs',fontsize=18)
plt.legend(('Tamim', 'Mushfiq', 'Mahmudullah', 'Kohli'))

leg = plt.gca().get_legend()
ltext  = leg.get_texts()
plt.setp(ltext, fontsize=20)

for label in ax.get_xticklabels():
	label.set_fontsize(14)
for label in ax.get_yticklabels():
	label.set_fontsize(15)

plt.show()
