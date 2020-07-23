t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    m=abs(x-z)
    p=abs(y-z)
    if m>p:
        print("Cat B")
    elif p==m:
        print("Mouse C")
    else:
        print("Cat A")


//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem//////