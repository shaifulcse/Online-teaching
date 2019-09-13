import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_subplot(111)

x=[1,2,3,4,5]
y=[10,20,6,11,100]


line = plt.plot(x,y)
plt.setp(line,color="r",linewidth=5,ls="-",
marker="*",markersize="10")
plt.show()
