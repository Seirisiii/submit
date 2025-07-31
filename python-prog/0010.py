import sys
s=sys.stdin.readline()
n1=True
n2=False
n3=False
for i in s:
  if i=='A':
    n1,n2=n2,n1
  elif i=='B':
    n2,n3=n3,n2
  elif i=='C':
    n1,n3=n3,n1
if n1:
  print(1)
elif n2:
  print(2)
elif n3:
  print(3)