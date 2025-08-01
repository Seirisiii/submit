import sys
a,b,c=map(int,sys.stdin.readline().split())
if c-b>b-a:
    print(c-b-1)
else:
    print(b-a-1)