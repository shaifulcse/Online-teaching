import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_subplot(111)

x=[1,2,3,4,5]
y=[10,20,6,100,10000]


line = plt.plot(x,y)
plt.setp(line,color="b",linewidth=3,ls="--",
marker="D",markersize="10")
for label in ax.get_xticklabels():
		label.set_fontsize(20)
for label in ax.get_yticklabels():
 		label.set_fontsize(20)

plt.title("Test graph",fontsize=18)
plt.xlabel("Some x values",fontsize=18)
plt.ylabel("Some Y values",fontsize=18)
plt.grid(True)

#ax.set_ylim(6, 1000)
#ax.set_xlim(1, 5)
ax.set_yscale('log')
plt.show()
