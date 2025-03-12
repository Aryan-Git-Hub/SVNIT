# taking input
T = int(input("Enter number of testcases: "))
l = []
max = -1
for i in range(T):
    t = int(input())
    l.append(t)
    if t>max:
        max = t

fibo = [0, 1]
while fibo[len(fibo)-1]<max:
    fibo.append(fibo[len(fibo)-1]+fibo[len(fibo)-2])

for i in range(T):
    if l[i] in fibo: print("IsFibo")
    else: print("IsNotFibo")