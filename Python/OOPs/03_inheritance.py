class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(self.name, self.age)

class Student(Person):
    def __init__(self, name, age, bcode, marks):
        Person.__init__(self, name, age)
        # self.name = name
        # self.age = age
        self.bcode = bcode
        self.marks = marks

    def displayData(self):
        Person.display(self)
        # self.display()
        print("Student Branch Code", self.bcode)
        print("Studen Branch Marks", self.marks)

# p = Person("Amit", 34)
# p.display()
s = Student("Aryan", 34, 123, 78)
s.displayData()

print("\n\n\n\n")

class A:
    __a = 0 # private attribute
    def __init__(self):
        print("A class")
    
    # private method
    # def __display(self):
    #     print("Hello")

class B(A):
    def __init__(self):
        super().__init__()
        print("B class")
class C(B):
    def __init__(self):
        super().__init__()
        print("C class")

a = A()
c = C()