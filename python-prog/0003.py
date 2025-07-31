import sys
m,n=map(int,sys.stdin.readline().split())
a=[[0 for j in range(n)] for i in range(m)]
b=[[0 for j in range(n)] for i in range(m)]
res=[[0 for j in range(n)] for i in range(m)]
for i in range(m):
    a[i]=list(map(int,sys.stdin.readline().split()))
for i in range(m):
    b[i]=list(map(int,sys.stdin.readline().split()))
for i in range(m):
    for j in range(n):
        print(a[i][j]+b[i][j],end=" ")
    print()