t=int(input())

for i in range(t):
    z=0
    n,k=map(int,input().split())
    m=list(map(int,input().split()))
    for i in m:
        if i > k:
            z+=1
    count,s=0,0
    if z >=1:
        print(-1)
    else:
        for p in range(0,n):
            s+=m[p]
            j=p
            if s > k:
                s=0
                count+=1
                #p=j+1
        print(count+1)