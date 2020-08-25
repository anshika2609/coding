n=int(input())
count=0

l=list(map(int,input().split()))
k,m=map(int,input().split())
for i in l:
    a=0
    for j in range(i,i+m):
        a=a+j
    if a==k:
        count+=1
print(count)