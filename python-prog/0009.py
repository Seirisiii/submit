import sys
l=list(map(int,sys.stdin.readline().split()))
l.sort()
s=sys.stdin.readline()
for i in s:
  if i>='A' and i<='C':
    print(l[ord(i)-ord('A')],end=" ")