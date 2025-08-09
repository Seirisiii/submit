import sys
a=sys.stdin.readline().strip()
op=sys.stdin.readline().strip()
b=sys.stdin.readline().strip()
if op=="+":
    if a==b:
        print("2"+"0"*(len(a)-1))
    else:
        la=len(a)
        lb=len(b)
        mn=min(la,lb)
        mx=max(la,lb)
        print("1"+"0"*(mx-mn-1)+"1"+"0"*(mn-1))
elif op=="*":
    print("1"+"0"*(len(a)+len(b)-2))