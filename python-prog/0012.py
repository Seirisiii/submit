import sys
s=sys.stdin.readline().strip()
sz=len(s)
for i in range(1,sz+1):
    if i%3==0:
        print("..*.",end="")
    else:
        print("..#.",end="")
print(".")
for i in range(1,sz+1):
    if i%3==0:
        print(".*.*",end="")
    else:
        print(".#.#",end="")
print(".")
for i in range(1,sz+1):
    if i%3==0 or (i!=1 and (i-1)%3==0):
        print("*.%c."%s[i-1],end="")
    else:
        print("#.%c."%s[i-1],end="") 
if sz%3==0:
    print("*")
else:
    print("#")
for i in range(1,sz+1):
    if i%3==0:
        print(".*.*",end="")
    else:
        print(".#.#",end="")
print(".")
for i in range(1,sz+1):
    if i%3==0:
        print("..*.",end="")
    else:
        print("..#.",end="")
print(".")