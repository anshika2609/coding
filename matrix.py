matrix1 = []
for i in range(3):
    a = []
    for j in range(3):
    	a.append(int(input()))
    matrix1.append(a)
        

for j in range(3):
    for k in range(3): 
        print(matrix1[j][k], end = " ")
    print()

