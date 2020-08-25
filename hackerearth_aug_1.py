<<<<<<< HEAD
t=int(input())
l=[]
for i in range(0,40):
		l.append(3**i)
for i in range(t):
	n=int(input())
	s=0
	k=[]
	while(n!=0):
		if n%2==1:
			k.append(l[s])
		s=s+1
		n=n//2

	print(len(k))
	print(*k)

=======
t=int(input())
l=[]
for i in range(0,40):
		l.append(3**i)
for i in range(t):
	n=int(input())
	s=0
	k=[]
	while(n!=0):
		if n%2==1:
			k.append(l[s])
		s=s+1
		n=n//2

	print(len(k))
	print(*k)

>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
