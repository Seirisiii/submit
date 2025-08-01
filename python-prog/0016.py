import sys
n=int(sys.stdin.readline())
s=sys.stdin.readline()
l=len(s)
adrian="ABC"
bruno="BABC"
goran="CCAABB"
score_adrain=0
score_bruno=0
score_goran=0
for i in range(l):
  if s[i]==adrian[i%3]:
    score_adrain+=1
  if s[i]==bruno[i%4]:
    score_bruno+=1
  if s[i]==goran[i%6]:
    score_goran+=1
mx=max(score_adrain,score_bruno,score_goran)
print(mx)
if mx==score_adrain:
  print("Adrian")
if mx==score_bruno:
  print("Bruno")
if mx==score_goran:
  print("Goran")