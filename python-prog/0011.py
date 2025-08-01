import sys
s=set()
for i in range(10):
    num=int(sys.stdin.readline())
    s.add(num%42)
print(len(s))
