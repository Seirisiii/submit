import sys
s=sys.stdin.readline().strip()
sz=len(s)
now=1
if sz%2==0:
    now=-1
three=sum(map(int,s))
eleven=sum((int(c) if i%2==0 else -int(c)) for i,c in enumerate(s))*now
print(three%3,((eleven%11)+11)%11)