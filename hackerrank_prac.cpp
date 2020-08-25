<<<<<<< HEAD
def minimumNumber(n, password):
    count = 0    
    if any(i.isdigit() for i in password)==False:
        count+=1
    if any(i.islower() for i in password)==False:
        count+=1
    if any(i.isupper() for i in password)==False:
        count+=1
    if any(i in '!@#$%^&*()-+' for i in password)==False:
        count+=1
    return max(count,6-n)

n=int(input())
st=input()
ans=minimumNumber(n,st)
print(ans)

=======
def minimumNumber(n, password):
    count = 0    
    if any(i.isdigit() for i in password)==False:
        count+=1
    if any(i.islower() for i in password)==False:
        count+=1
    if any(i.isupper() for i in password)==False:
        count+=1
    if any(i in '!@#$%^&*()-+' for i in password)==False:
        count+=1
    return max(count,6-n)

n=int(input())
st=input()
ans=minimumNumber(n,st)
print(ans)

>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
#https://www.hackerrank.com/challenges/strong-password/problem