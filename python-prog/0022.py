n=int(input()) # ภาษากากชิบหาย ไอ่สัส
if n%2==0:
    l=n//2-1
    r=n//2-1
    for i in range(n):
        for j in range(n-1):
            if j==l or j==r:
                print("*",end="")
            else:
                print("-",end="")
        print()
        if i<n//2-1:
            l-=1
            r+=1
        elif i>n//2-1:
            l+=1
            r-=1
else:
    l=n//2
    r=n//2
    for i in range(n):
        for j in range(n):
            if j==l or j==r:
                print("*",end="")
            else:
                print("-",end="")
        print()
        if i<n//2:
            l-=1
            r+=1
        else:
            l+=1
            r-=1

