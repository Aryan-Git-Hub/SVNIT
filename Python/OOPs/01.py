# Entity -> set of property          +           set of behaviour
# Person -> name/age/weight/height   +           BMI/runSpeed()/Intelligence()
# class ->  variable/attribute       +           method/behaviour/function/procedure


class Person:
    name = ""
    age = ""
    weight = ""
    height = ""
    def runSpeed():
        return age*height/weight

p1 = Person()
p1.name = "Aryan"
p1.age = 20
p1.height = 6
p1.weight = 83
print(p1.name)
print(p1.age)
print(p1.height)
print(p1.weight)



class Person:
    # __init__ is not a constructor, it is a initializer
    # __init__ is a method which is called when an object is created
    # __init__ is called automatically
    # __init__ cannot be multiple or not be overloaded but constructer can be overloaded
    def __init__(self, name, age, weight, height):
        self.name = name
        self.age = age
        self.weight = weight
        self.height = height
    # overwiritting __init__ method
    def __init__(self, name, age, weight, height):
        print("This is a constructor")
    def runSpeed(self):
        return self.age*self.height/self.weight

p1 = Person("Aryan", 20, 83, 6)



# ************* 4 pillars of OOPs *************

# 1. encapsulation: hiding the data from the outside world and accessing it only through publicly exposed methods called getters and setters.

# 2. abstraction: hiding the implementation details and only showing the necessary features of an object.

# 3. inheritance: allows a class to inherit properties and behavior from another class. The class that inherits is called a subclass, and the class that is inherited from is called a superclass.

# 4. polymorphism: allows objects of different classes to be treated as objects of a common superclass. It is the ability to redefine methods for derived classes.