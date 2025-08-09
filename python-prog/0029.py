import sys
x,y=map(int,sys.stdin.readline().split())
if x>y:
    print(2)
else:
    print((y+x-1)//x)