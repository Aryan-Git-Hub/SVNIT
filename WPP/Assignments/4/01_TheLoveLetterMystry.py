T = int(input("Enter the number of test cases: "))
t = []
for i in range(T):
    str = input("Enter the string: ").lower()
    t.append(str)

for i in range(T):
    start = 0
    end = len(t[i])-1
    count = 0
    while(start<end):
        count = count+abs(ord(t[i][start])-ord(t[i][end]))
        start=start+1
        end=end-1
    print(count)