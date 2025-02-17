from abc import ABC, abstractmethod

class Swimmable(ABC):
    @abstractmethod
    def swim(self):
        pass

class Fish(Swimmable):
    def swim(self):
        return "Fish is swimming"

class Boat(Swimmable):
    def swim(self):
        return "Boat is floating"


fish = Fish()
boat = Boat()
print(fish.swim())
print(boat.swim())



# ***************************************************************************************
class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass

    @abstractmethod
    def move(self):
        pass


# Abstract class
class Bird(Animal):
    @abstractmethod
    def fly(self):
        print("Hello")

# a = Animal()