import sys
class Football:
    def __init__(self,name="",score=0,goal=0,diff=0):
        self.name=name
        self.score=score
        self.goal=goal
        self.diff=diff
team=[Football() for i in range(4)]
arr=[[0]*4 for i in range(4)]
for i in range(4):
    team[i].name=sys.stdin.readline().strip()
for i in range(4):
    arr[i]=list(map(int,sys.stdin.readline().split()))
    s=sum(arr[i])
    team[i].goal=s
    team[i].diff=s
for j in range(4):
    s=0
    for i in range(4):
        s+=arr[i][j]
    team[j].diff-=s
for i in range(4):
    for j in range(i+1,4):
        if arr[i][j]>arr[j][i]:
            team[i].score+=3
        elif arr[i][j]<arr[j][i]:
            team[j].score+=3
        else:
            team[i].score+=1
            team[j].score+=1
team.sort(key=lambda x:(x.score,x.diff,x.goal),reverse=True)
for i in range(4):
    print(team[i].name,team[i].score)