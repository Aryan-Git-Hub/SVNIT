T = int(input("Enter the number of test cases: "))
t = []
for i in range(T):
    a, b = map(int, input().split())
    t.append((a, b))

for i in range(T):
    length = len(str(t[i][0]))
    if length%2: zeros = length//2
    else: zeros = length//2-1
    start_pt = 10**zeros

    count = 0
    while (start_pt**2<=t[i][1]):
        if(start_pt**2>=t[i][0]): count += 1
        start_pt += 1
    print(count)