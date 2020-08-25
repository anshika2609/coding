t=int(input())
for i in range(t):
    s=list(input())
    p=list(input())
    for i in p:
        s.remove(i)
    s.sort()
    
    z,x=" "," "
    s=z.join(s)
    p=x.join(p)
    p="".join(p.split())
    l4=[]
    a=0
    b=0
    for i in range(0,len(p)):
        l4.append(ord(p[i]))

    for i in range(1,len(l4)):
        if l4[i]>l4[0]:
            a=1
            b=i
            break

    print(a,b,l4)
    