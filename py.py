t=int(input())
for i in range(t):
    string = input().strip()
    pattern = input().strip()
    sostring = sorted(string)
    sopattern = sorted(pattern)
    patternli = [x for x in pattern]
    newlist = []
    j = 0
    m = int(len(sopattern))
    for i in sostring:
        if j<m:
            if i==sopattern[j]:
                j+=1
                continue
            else:
                newlist.append(i)
        else:
            newlist.append(i)
    result=[]
    for i in range(int(len(newlist))):
        if pattern[0]<newlist[i]:
            result = newlist[:i] + patternli + newlist[i:]
            break
        else:   
            result = newlist + patternli
    print(''.join(str(x) for x in result))