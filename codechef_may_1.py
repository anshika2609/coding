t=int(input())
for i in range(0,t):
	rows, cols = (3,3)
	matrix1 = [[-5 for i in range(cols)] for j in range(rows)]
	#matrix= [[input().split()]
	matrix=[]
	for p in range(3):
		a =[]
		for k in range(3):
			a.append((input().split()))
		matrix.append(a)

	for j in range(3):
		for k in range(3):
			print(matrix[j][k],end=" ")
		print()
    

  	#for j in range(3):
  	#	for k in range(3):
  	#		print(matrix[j][k],end=" ")
  	#	print()

