<<<<<<< HEAD
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
    s="".join(s.split())
    p="".join(p.split())
    l4=[]
    a=-1
    for i in range(0,len(p)):
        l4.append(p[i])

    for i in range(1,len(l4)):
        if l4[i]!=l4[0]:
            if l4[i]<l4[0]:
                a=0
            else:
                a=1
            break

    k=ord(p[0])
    l1=[]
    l2=[]
    l3=[]
    for j in range(0,len(s)):
        if ord(s[j])<k:
            l1.append(s[j])
        elif ord(s[j])==k:
            l2.append(s[j])
        else:
            l3.append(s[j])
    
    c,d,e=" "," "," "
    
    l1=c.join(l1)
    l2=d.join(l2)
    l3=e.join(l3)
    R=l1.replace(" ","")+l2.replace(" ","")+p.replace(" ","")+l3.replace(" ","")
    x=l1.replace(" ","")+p.replace(" ","")+l2.replace(" ","")+l3.replace(" ","")
    if a==0:
        print(x.replace(" ",""))
    else:
        print(R.replace(" ",""))
=======
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
    s="".join(s.split())
    p="".join(p.split())
    l4=[]
    a=-1
    for i in range(0,len(p)):
        l4.append(p[i])

    for i in range(1,len(l4)):
        if l4[i]!=l4[0]:
            if l4[i]<l4[0]:
                a=0
            else:
                a=1
            break

    k=ord(p[0])
    l1=[]
    l2=[]
    l3=[]
    for j in range(0,len(s)):
        if ord(s[j])<k:
            l1.append(s[j])
        elif ord(s[j])==k:
            l2.append(s[j])
        else:
            l3.append(s[j])
    
    c,d,e=" "," "," "
    
    l1=c.join(l1)
    l2=d.join(l2)
    l3=e.join(l3)
    R=l1.replace(" ","")+l2.replace(" ","")+p.replace(" ","")+l3.replace(" ","")
    x=l1.replace(" ","")+p.replace(" ","")+l2.replace(" ","")+l3.replace(" ","")
    if a==0:
        print(x.replace(" ",""))
    else:
        print(R.replace(" ",""))
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
