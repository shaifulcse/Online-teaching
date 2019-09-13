import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_subplot(111)

lnst=["-", "--","-.", ":", "-", "--","-.", ":"]
marks=["^", "d", "o", "v", "p", "s", "<", ">"]
#marks_size=[15, 17, 10, 15, 17, 10, 12,15]
marks_size=[2, 2, 10, 15, 17, 10, 12,15]
marker_color=['#0F52BA','#ff7518','#6CA939','#e34234','#756bb1','brown','#c994c7', '#636363']


def collect_runs(records,years):
  max_run=-10	
  for player in records:

    for year in years:
      fr=open("data/"+
      player+"/years/"+year+".txt","r")

      ### ignore header
      fr.readline()
      lines=fr.readlines()
      for line in lines:
        line=line.strip()
	parsed=line.split("\t")
	run = parsed[5]

	try:

          if "*" in run:
	    print run	
	    run = run.split("*")[0]
            print run
	  run = int(run)
	  records[player]["runs"].append(run)	
	  if max_run<run:
	    max_run=run
	   						
						
	except:
	  print run
          pass
		
  return records,max_run

def initialize(players):
  records={}
  for player in players:
    records[player]={}
    records[player]["runs"]=[]
  return records



def calculate_cdf(records, player):

  sm=len(records[player]["runs"])
  for run in records[player]["runs"]:
    records[player]["count"][run]+=1
 
  cdf=[]
  prev=0.0

  for i in range(len(records[player]["count"])):
    prob=(records[player]["count"][i] / sm) + prev	
    prev=prob
    cdf.append(prob)
  return cdf


def graph(players, records):
  index=0
  for player in players:
   
    dist=calculate_cdf(records, player)
    line=(plt.plot(range(len(dist)),dist))
    mc=marker_color[index]
    stl=lnst[index]
    mk=marks[index]
					
      
    plt.setp(line,color=mc,linewidth=3,ls=stl)
    index+=1
  for label in ax.get_xticklabels():
    label.set_fontsize(17)
  for label in ax.get_yticklabels():
    label.set_fontsize(17)
  #ax.set_ylim(0, 1.05)
  #ax.set_xlim(0, 70)
  plt.title("Mushfiq VS Tamim VS Kohli",fontsize=20)
  plt.xlabel("Runs",fontsize=18)
  plt.ylabel("CDF",fontsize=18)



  plt.grid(True)


  plt.legend(players,loc=0,fontsize=20)
  plt.show()


if __name__=="__main__":

  players=["mushfiq", "tamim", "kohli"]
 
  years=["2015","2016","2017","2018","2019"]
  
  records = initialize(players)
  records,max_run = collect_runs(records,years)
  for player in records:
	records[player]["count"]=[0.0]*(max_run+1)

  #print sorted(records["mushfiq"]["runs"])
  #print len(records["tamim"]["runs"])	
  graph(players, records)
   


  	 	
