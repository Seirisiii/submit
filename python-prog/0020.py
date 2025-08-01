import sys
idx=0
mx=0
for i in range(1,6):
    arr=list(map(int,sys.stdin.readline().split()))
    if mx<sum(arr):
        mx=sum(arr)
        idx=i
print(idx,mx)