def solve():
    matrix = []
    sumarr = []
    for i in range(3):
        a = []
        str = input()
        for i in range(len(str)):
            a.append(str[i])
        matrix.append(a)
    cx = co = 0
    for i in range(3):
        for j in range(3):
            if matrix[i][j] == 'X':
                matrix[i][j] = 1
                cx+=1
            elif matrix[i][j] == 'O':
                matrix[i][j] = 0
                co+=1
            else:
                matrix[i][j] = -3

    for i in range(3):
        sum = 0
        for j in range(3):
            sum+=matrix[i][j]
        sumarr.append(sum)



    for i in range(3):
        sum = 0
        for j in range(3):
            sum+=matrix[j][i]
        sumarr.append(sum)

    
    sum=0
    for i in range(3):    
        sum+=matrix[i][i]
    sumarr.append(sum)

    sumarr.append(matrix[0][2]+matrix[1][1]+matrix[2][0])
   
    ans_y = ans_x = 0
    for i in range(len(sumarr)):
        if (sumarr[i] == 0):
            ans_y+=1
        elif (sumarr[i] == 3):
            ans_x+=1

    if abs(cx-co)>1 or co>cx or (ans_y==1 and ans_x==1) or (cx-co == 1 and ans_y==1) or (co==cx and ans_x==1):
        return 3
            
    elif (cx+co == 9 and ans_x==0 and ans_y==0) or (cx>co and ans_x>=1) or (co==cx and ans_y>=1):
        return 1

    else:
        return 2


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        ans = solve()
        print(ans,end="\n")