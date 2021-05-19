matrix=[]
for i in range(3):
	a=[]
	for j in range(3):
		a.append(int(input()))
	matrix.append(a)

for i in range(3):
	for j in range(3):
		print(matrix[i][j],end=" ")
	print()