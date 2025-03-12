def factorial(n):
    if n<=2:
        return n
    return n*factorial(n-1)

a = int(input("Enter a number to find its factorial: "))
print(factorial(a))