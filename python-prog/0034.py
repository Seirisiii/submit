import sys
A,B,C=map(int,sys.stdin.readline().split())
for a in range(1,101):
    if A%a!=0:
        continue
    c=A//a
    for b in range(-100,101):
        if b==0 or C%b!=0:
            continue
        d=C//b
        if A==a*c and B==a*d+b*c and C==b*d:
            print(a,b,c,d)
            quit()
print("No Solution")