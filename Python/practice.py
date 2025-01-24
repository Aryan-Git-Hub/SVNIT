# list is mutable
# tuple is immutable
# set is immutable and unordered

l = [chr(i) for i in range(65, 91) if i%2!=0]
print(l)
for i in l:
    print(i, end=" ")
print()  # Add this line to ensure the output ends with a newline

# zip function
l1 = [23, 54, 67, 76]
l2 = [34, 56, 23]
for i, j in zip(l1, l2):
    print(i, j)
print()
# enumerate function
for index, elem in enumerate(l1):
    print(index, elem)


print("\n")
dict1 = {'a':1, 'b':2, 'c':3}
dict2 = {'d':4, 'e':5, 'f':6}
print(list(zip(dict1, dict2)))
for i, j in enumerate(zip(dict1, dict2)):
    print(i, j)



str1 = "Hello"
print("str1 is", str1)
print("ID of str1 is", id(str1))
str2 = "World"
print("str2 is", str2)
print("ID of str2 is", id(str2))
str1 += str2
print("ID of str1 is", id(str1)) # different id

print(str1.count("l", 0, len(str1))) # str1.count("string", initial_val, end_val)

print(str1.find("lo", 0, len(str1)))
print(str1.index("lo", 0, len(str1)))
# difference between find and index
# if not found then find returns -1 and index gives an error

str1 = "Hello@"
print(str1.isalnum())


a = "Hel"
# ***Important***
print(a.zfill(4))
print(a.zfill(6))