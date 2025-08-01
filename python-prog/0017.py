import sys
arr=list(map(int,sys.stdin.readline().split()))
arr.sort()
print(arr[0]*arr[2])