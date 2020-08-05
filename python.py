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