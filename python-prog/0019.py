import sys
n=int(sys.stdin.readline())
s=list()
b=list()
mn=1e9
for i in range(n):
    si,bi=map(int,sys.stdin.readline().split())
    s.append(si)
    b.append(bi)
for i in range(1,1<<n):
    ress=1
    resb=0
    for j in range(n):
        if i&(1<<j):
            ress*=s[j]
            resb+=b[j]
    mn=min(mn,abs(ress-resb))
print(mn)