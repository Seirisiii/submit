import sys
a=int(sys.stdin.readline())
b=int(sys.stdin.readline())
c=int(sys.stdin.readline())
sum=a+b+c
if sum>=80 and sum<=100:
  print("A")
elif sum>=75 and sum<=79:
  print("B+")
elif sum>=70 and sum<=74:
  print("B")
elif sum>=65 and sum<=69:
  print("C+")
elif sum>=60 and sum<=64:
  print("C")
elif sum>=55 and sum<=59:
  print("D+")
elif sum>=50 and sum<=54:
  print("D")
elif sum>=0 and sum<=49:
  print("F")