<<<<<<< HEAD
n=int(input())
ans1=0
ans2=0
li=list(map(int,input().split()))   
k=li[0]
m=li[0]
for i in range(1,n):
    if li[i]>k :
        k=li[i]
        ans1=ans1+1
for i in range(1,n):
    if li[i]<m:
        m=li[i]
        ans2=ans2+1

print(ans1,ans2)
=======
n=int(input())
ans1=0
ans2=0
li=list(map(int,input().split()))   
k=li[0]
m=li[0]
for i in range(1,n):
    if li[i]>k :
        k=li[i]
        ans1=ans1+1
for i in range(1,n):
    if li[i]<m:
        m=li[i]
        ans2=ans2+1

print(ans1,ans2)
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
    