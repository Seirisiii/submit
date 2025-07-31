import sys
n=int(sys.stdin.readline())
mx=-2e9
mn=2e9
for i in range(n):
    num=int(sys.stdin.readline())
    mx=max(mx,num)
    mn=min(mn,num)
print(mn)
print(mx)