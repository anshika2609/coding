<<<<<<< HEAD
from itertools import product
def sum_of_tup(n):
    sum=0
    for i in range(len(n)):
        sum=sum+int(n[i])
    return sum
low,high=map(int,input().split())
k=int(input())
lst=[]
for i in range(low,high+1):
    lst.append(str(i))
count=0
perm=product(lst,repeat=k)
for i in perm:
    if (sum_of_tup(i)%2==0):
        count+=1
print(count%1000000007)
=======
s=input()
n=int(input())
y=s.count('a')
m=len(s)
k=n//m
z=n%m
q=s[0:z]
j=y*k+q.count('a')
print(j)


#https://www.hackerrank.com/challenges/repeated-string/problem#
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
