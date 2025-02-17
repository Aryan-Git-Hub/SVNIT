class Person:
    def __init__(self, age):
        self.age = age
    def __add__(self, other):
        return self.age + other.age

p1 = Person(20)
p2 = Person(18)
print(p1 + p2) # 38
