class NegativeNumberError(Exception):
    pass

try:
    num = int(input("Enter a positive number: "))
    if num<0:
        raise NegativeNumberError("Negative numbers are not allowed")
    else: print("You Entered", num)
except NegativeNumberError as e:
    print(e)
