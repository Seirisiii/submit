import sys
sum=0
arr=list()
for i in range(9):
    num=int(sys.stdin.readline())
    arr.append(num)
    sum+=num
for i in range(9):
    for j in range(i+1,9):
        if sum-arr[i]-arr[j]==100:
            for k in range(9):
                if k==i or k==j:
                    continue
                print(arr[k])
            quit()