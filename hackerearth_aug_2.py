<<<<<<< HEAD
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
=======
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
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
        print(s.replace(" ",""))