T = int(input("Enter testcases: "))
t = [chr(x) for x in range(97, 123)]

for i in range(T):
    s = input("Enter the string: ").lower()
    isPangram = True
    for i in range(len(t)):
        if t[i] not in s:
            isPangram = False
            break
    if isPangram: print("isPangram")
    else: print("isNotPangram")