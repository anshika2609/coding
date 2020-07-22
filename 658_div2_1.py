<<<<<<< HEAD
t=int(input())
for i in range(t):
	n,m=map(int,input().split())
	a1=list(map(int,input().split()))
	b1=list(map(int,input().split()))
	k=set(a1)
	j=k.intersection(b1)
	li=list(j)
	if(len(li)>=1):
		print("YES")
		print(1,li[0])
	else:
		print("NO")
=======
t=int(input())
for i in range(t):
	n,m=map(int,input().split())
	a1=list(map(int,input().split()))
	b1=list(map(int,input().split()))
	k=set(a1)
	j=k.intersection(b1)
	li=list(j)
	if(len(li)>=1):
		print("YES")
		print(1,li[0])
	else:
		print("NO")
>>>>>>> 3223536da966e690f4252451834b722b6414ff30
