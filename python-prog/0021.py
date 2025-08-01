import sys
s=sys.stdin.readline()
sz=len(s)
i=0
while(i<sz):
    print(s[i],end="")
    if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u':
        i+=2
    i+=1