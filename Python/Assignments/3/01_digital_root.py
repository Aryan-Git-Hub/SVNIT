def sum_of_digit(n):
    sum = 0
    for i in range(len(str(n))):
        sum += n%10
        n //= 10
    return sum

def digital_root(n):
    if len(str(n))==1:
        return n
    return digital_root(sum_of_digit(n))

n = int(input("Enter a number to find its digital root: ")) # 45893
print(digital_root(n))