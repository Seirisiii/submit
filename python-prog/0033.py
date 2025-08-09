import sys
n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))
count=[0]*10005
for i in arr:
    count[i]+=1
mx=max(count)
for i in range(1,10001):
    if mx==count[i]:
        print(i,end=" ")