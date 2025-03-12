n = int(input("Enter a number to find its factorial: "))
fac = 1
for i in range(1, n+1):
    fac *= i

print(fac)