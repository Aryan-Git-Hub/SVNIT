try:
    num1 = int(input("Enter a number: "))
    num2 = int(input("Enter another number: "))
    result = num1/num2
    print("Result", result)

except ValueError:
    print("ValueError")

except ZeroDivisionError:
    print("ZeroDivisionError")

else:
    print("No exceptions occurred")

finally:
    print("Always run")

# only two cases where finally not run
# 1) Using exceptional handling in function and return in any other block
# 2) Using infinite loop of function