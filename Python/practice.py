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


# give ASCII value of 'A'
print(ord('A')) # 65
print(chr(65)) # A

import string
print(string.ascii_letters) # a-zA-Z
print(string.digits) # 0-9


print("\n\n\n\n")
import re
pattern = r"[a-zA-Z]+"
matches = list(re.finditer(pattern, "LXI 2013, VXI 2015, VDI 20104 Maruti Suzuki Car in India"))
print("Number of Mathes")
for match in matches:
    print(match.group(), match.span())



print("\n\n")
l = [1,2,3,4]
print(l)
l.remove(2) # takes element as an argument
# l.remove(435) # it will return an error
l.pop(1) # takes position index as an argument
print(l)


print("\n\n")
l = [1,2,3,4]
# l1 = l # reference copy
l1 = l.copy() # shallow copy
l1[1] = 5
print(l) # [1, 5, 3, 4]


students = [("Amit", 80), ("Rahul", 90), ("Ravi", 85)]
sorted_students = sorted(students, key=lambda x: x[0], reverse=True) # sort by name
sorted_students = sorted(students, key=lambda x: x[1], reverse=True) # sort by marks
print(sorted_students)


print("\n\n")
my_list = [1, 3, 2, 4525,63,234,7,976,13,9,345,45, 4, 3, 4, 2,567,25,764,134,6,425,7,76,676, 57,245,123,3446,5568,6,34]
unique_list = (set(my_list))
print(unique_list)


print("\n\n")
str = "Hello World"
print(set(str))

sentence = 'Start a sentence and then bring it to an end'
pattern = re.compile(r'abc')