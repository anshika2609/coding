n=int(input())
l=list(map(int,input().split()))
q=int(input())
while q>0:
	w=[]
	k=list(map(int,input().split()))
	if(len(k)==4):
		x=k[1]
		y=k[2]
		z=k[3]
	else:
		u=k[1]
	if k[0]==1:
		for i in range(x-1,y):
			l[i]+=z
	elif k[0]==2:
		for i in range(x-1,y):
			l[i]*=z
	else:
		z1=0
		z2=0
		for i in range(0,len(l)):
			if l[i]==u:
				z1=i+1
				break
		for i in range(len(l)-1,-1,-1):
			if l[i]==u:
				z2=i+1
				break
		if z1==0 and z2==0:
			print(-1)
		else:
			z=z2-z1+1
			print(z)
	q-=1