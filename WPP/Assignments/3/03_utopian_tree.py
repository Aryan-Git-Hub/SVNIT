def utopianTreeSize(n):
    h = 1
    for i in range(1, n+1):
        if i%2:  h *= 2
        else: h += 1
    return h

# taking input
T = int(input("Enter number of testcases: "))
N = []
for i in range(T):
    t = int(input())
    N.append(t)

print()
for i in range(T):
    print(utopianTreeSize(N[i]))