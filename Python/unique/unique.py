def isUnique(str1):
    ascii_size = 256
    arr = [False] * ascii_size
    for i in range(len(str1)):
        if arr[ord(str1[i])]:
            return 0
        arr[ord(str1[i])] = True
    return 1

str1 = "Fernando"
if (isUnique(str1)):
    print("The string has all unique characters")
else:
    print("The string does not have all unique characters")
