t=int(input())
for i in range(t):
    s=list(input())
    a=s[::-1]
    if a==s:
        print(-1)
    else:
        s.sort()
        c=" "
        s=c.join(s)
        print(s.replace(" ",""))