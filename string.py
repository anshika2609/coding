<<<<<<< HEAD
def count_substring(string, sub_string):
    count=0
    p=len(sub_string)
    for i in range(len(string)):
        if string[i:p+i] == sub_string:
            count+=1
    return count


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
=======
def count_substring(string, sub_string):
    count=0
    p=len(sub_string)
    for i in range(len(string)):
        if string[i:p+i] == sub_string:
            count+=1
    return count


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
>>>>>>> 42c870e614a7c348e7d82037b4ca0a52682c9653
    print(count)