import sys
n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))
arr.sort()
zero=arr.count(0)
print(arr[zero],end="")
for i in range(zero):
    print(arr[i],end="")
for i in range(zero+1,n):
    print(arr[i],end="")