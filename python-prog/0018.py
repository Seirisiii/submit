import sys
n,k=map(int,sys.stdin.readline().split())
sieve=[False]*1005
cnt=0
for i in range(2,n+1):
    if sieve[i]:
        continue
    for j in range(i,n+1,i):
        if sieve[j]:
            continue
        sieve[j]=True
        cnt+=1
        if cnt==k:
            print(j)
            quit()