# -----------------------------------Args------------------------------------
   # Args is used for make a function like adding two or more numbers at one time.


# def total(a, b):
#     return (a+b)
# This is use for adding only two numbers
# def all_total(*args):
#     total = 0
#     for num in args:
#         total += num
#     return (total)
# print (all_total(1, 2, 3, 4, 5, 6, 7, 8, 9, 10))

# def multiply_nums(num, *args):
#     multiply = 1
#     for num in args:
#         multiply *= num
#     return (multiply)
# print (multiply_nums(10, 2, 5)) # 10 is not multiply because it is stored in num

# def multiply_nums(*args):
#     multiply = 1
#     for num in args:
#         multiply *= num
#     return (multiply)
# tuple_1 = (10, 2, 5)
# print (multiply_nums(*tuple_1)) # * is used for unpack tuple

# def to_power(num, *args):
#     if args:
#         return [i**num for i in args]
#     return ("You did't pass anything")
# list_1 = [1, 2, 3, 4, 5]
# print (to_power(3, *list_1))

# -----------------------------------Kwargs------------------------------------
# Kwargs is used for make the function which contain many complex items like dictonary.

# def func(**kwargs):
#     for i, j in kwargs.items():
#         print(f"{i} : {j}")
# d = {"Name" : "Aryan Jain", "Age" : 16}
# (func(**d)) # This is Dictonary Unpacking

# Now we learnt about function with all parameters
# PADK(parameters, *args, degault parameters, **kwargs) is the series for making function
# def function_1(name, *args, last_name = "unknown", **kwargs):
#    print (name)
#    print (set(args))
#    print (last_name)
#    print (kwargs)
# (function_1("Aryan Jain", 1,2,3,4, a = 1, b = 2))

# Lambda expression (anonymous function)

# def add(a, b):
#    return (a+b)
# add2 = lambda a, b:a+b
# print (add2(2, 3))
# multiply = lambda a, b:a*b
# print (multiply(2, 3))
# print (add)
# print (add2)
# print (multiply)

# ---------------------------------Lambda----------------------------------
is_even = lambda a:a%2==0
print (is_even(10))
last_char = lambda str: str[::-1].title()
print (last_char("aryan"))
len_char = lambda a:a>=5 if type(a)==int else len(a)>=5
print (len_char(10))
print (len_char("aryan"))

# Lambda in list
# numbers = [i for i in range(1, 11)]
# squares_of_list = list(map(lambda a:a**2, numbers))
# print (squares_of_list)

                                 
# --------------------------------Enumerate--------------------------------
# names = ["Aryan", "Jain", "abc", "def"]
# for pos, name in enumerate(names):
#    print (f"{pos} -------> {name}")
# def find_pos (l, target):
#    for pos, name in enumerate(l):
#       if name==target:
#          print(pos)
#    return ("There is no name in list")
# print (find_pos(names,"Jain"))

# -----------------------------List Functions-------------------------------

# -----------------------------------MAP------------------------------------
# numbers = ["3", "34", "64"]
# numbers = list(map(int, numbers))
# total = 0
# for i in range(len(numbers)):
#     total += (numbers[i])
# print(total)
# def sq(a):
#     return a*a
# num = [2,3,5,6,76,3,3,2]
# square = list(map(sq, num))
# print(square)
# num = [2,3,5,6,76,3,3,2]
# square = list(map(lambda x: x*x, num))
# print(square)
# def square(a):
#     return a*a
# def cube(a):
#     return a*a*a
# func = [square, cube]
# for i in range(5):
#     val = list(map(lambda x:x(i), func))
#     print(val)
# names = ["Aryan", "Jain", "abc", "def"]
# length = list(map(len, names))
# print (length)

# ---------------------------------FILTER------------------------------------
# list_1 = [1,2,3,4,5,6,7,8,9]
# def is_greater_5(num):
#     return num>5
# gr_than_5 = list(filter(is_greater_5, list_1))
# print(gr_than_5)

# ----------------------------------REDUCE---------------------------------------
# from functools import reduce # reduce function wanta=s to import from functools
# list1 = [1,2,3,4,2]
# num = reduce(lambda x, y:x+y, list1)
# num = 0
# for i in list1:
#     num += i
# print(num)

# -----------------------------------Zip-----------------------------------------
# names = ["Aryan", "Jain", "abc", "def"]
# numbers = [i for i in range(1, 6)]
# user_id = ["user1", "user2", "user3", "user4", "user5"]
# print (list(zip(names, numbers, user_id)))

# l = [(1,2), (3,4), (5,6), (7,8), (9,10)]
# l1, l2 = list(zip(*l)) # *l is use for unpack list.
# print (l1)
# print (l2)

# -------------------------------------All and Any---------------------------------------
# All function is used for check all the item is False than answer is false
# numbers = [i for i in range(1, 11)]
# print (all([num%2==0 for num in numbers]))
# Any function is used for check any of the item is True than answer is True
# numbers = [i for i in range(1, 11)]
# print (any([num%2==0 for num in numbers]))

# ----------------------------------Join-----------------------------------------
# lis = ["\nJohn", "cena", "Randy", "orton",
#        "Sheamus", "khali", "jinder mahal"]
# for item in lis:
#     print(item, end=" and ")
# a = " and ".join(lis)
# print(a, "other wwe superstars")

#--------------------------------------------------------------------------------

# -------------------------Iterator and Iterables-------------------------------
# Iter is a function which is use in for loop automaticaly for intigrate the value of i in list.
# numbers = [i for i in range(1, 11)]
# number_iter = iter(numbers)
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))
# print (next(number_iter))

# -------------------------------------------------------------------------------

# ---------------------------------Decoraters------------------------------------
# def function():
#     print("My name is aryan jain")
# func1 = function
# del function
# func1()
# def funcret(num):
#     if num==0:
#         return print
#     if num==1:
#         return sum
# a = funcret(0)
# print(a)
# def executor(func):
#     func("The quick brown fox jumps over the lazy dog.")
# executor(print)

# def dec1(func1):
#     def nowexecute():
#         print("Executing now")
#         func1()
#         print("Executed")
#     return (nowexecute)
# @dec1
# def who_is_harry():
#     print("Harry is a good boy")
# who_is_harry = dec1(who_is_harry)
# who_is_harry()

#--------------------------------------------------------------------------------

# f.write("aryan")

# n! = n * n-1 * n-2 * n-3.......1
# n! = n * (n-1)!
# number = int(input("Enter then number : "))
# def factorial_iterative(n):
#     """
#         :param n: Integer
#         :return: n * n-1 * n-2 * n-3.......1
#     """
#     fac = 1
#     for i in range(n):
#         fac = fac * (i+1)
#     return (fac)
# print("Factorial Using Iterative Method", factorial_iterative(number))
# number = int(input("Enter then number : "))
# def factorial_recursive(n):
#     """
#         :param n: Integer
#         :return: n * n-1 * n-2 * n-3.......1
#     """
#     if n == 1:
#         return 1
#     else:
#         return n * factorial_recursive(n-1) # factorial recursive is used for intigrate any no. like n.
    # 5 * factorial_recursive(4)
    # 5 * 4 * factorial_recursive(3)
    # 5 * 4 * 3 * factorial_recursive(2)
    # 5 * 4 * 3 * 2 * factorial_recursive(1)
    # 5 * 4 * 3 * 2 * 1 = 120
# 0 1 1 2 3 5 8 13
# print("Factorial Using Recursive Method", factorial_recursive(number))

# number = int(input("Enter then number : "))
# def fibonacci(n):
#     if n==1:
#         return 0
#     elif n==2:
#         return 1
#     else:
#         return fibonacci(n-1)+ fibonacci(n-2)
# print(fibonacci(number))

# -----------------------------Min, Max Function-------------------------------------
# def func(item):
#     return (len(item))
# li = ["Aryan", "Harshit", "Harry"]
# print (max(li, key=func))

# students = {
#     "Aryan":{"score":100, "age":16},
#     "Harshit":{"score":90, "age":24},
#     "Harry":{"score":80, "age":24},
# }
# print (max(students, key = lambda item: students[item]["age"]))
# print (max(students, key = lambda item: students[item]["score"]))

# ------------------------------Sorted Function-------------------------------------
# fruits1 = ("grapes", "mango", "apple")
# fruits2 = ("banana", "orange", "pineapple")
# fruits = fruits1, fruits2
# print (sorted(fruits1))
# print (sorted(fruits2, reverse = True))
# print (sorted(fruits, reverse = True))

# guitars = [
#     {"model": "yamaha f310", "price":84000},
#     {"model": "faith naptune", "price":50000},
#     {"model": "faith appolo venus", "price":35000},
#     {"model": "taylor 814ce", "price":100000},
# ]
# sorted_guitars = sorted(guitars, key = lambda d: d["price"], reverse = True) # reverse is a function of sorted it is use for sort any thing reverse
# sorted_guitars2 = sorted(guitars, key = lambda d: d["price"])
# print (sorted_guitars, end = "\n\n")
# print (sorted_guitars2)

# def add(a,b):
#     '''This function takes two numbers and return sum of two numbers.'''
#     return (a+b)
# print (add.__doc__)
# a = add
# print (a.__name__)
# print (help(sum))