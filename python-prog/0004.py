import sys
s=sys.stdin.readline()
if s.isupper():
    print("All Capital Letter")
elif s.islower():
    print("All Small Letter")
else:
    print("Mix")