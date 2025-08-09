import sys
s=["Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"]
arr=[0,31,59,90,120,151,181,212,243,273,304,334]
d,m=map(int,sys.stdin.readline().split())
print(s[(arr[m-1]+d)%7])