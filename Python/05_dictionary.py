squares = {x:x*x for x in range(10, 0, -1)}
for key, value in squares.items():
    print(key, value)
print(sorted(squares)) # sort by key and return a list


print(squares.get(23, "Not Found")) # if key is not found then return "Not Found"

age = {"Amit": 25, "Rahul": 30, "Ravi": 35, "Amit": 40}
print(age["Amit"]) # 40

age.update({"Aryan": 45, "Rahul": 50})
print(age)


print(age.keys())
print(age.values())


print(age.pop("Amit"))
print(age)