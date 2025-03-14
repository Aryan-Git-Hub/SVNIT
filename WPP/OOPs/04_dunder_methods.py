class ABC:
    def __init__(self, name):
        self.name = name
        print("HELlO")
    
    def __del__(self):
        print("delete")

    
    def __add__(self, other):
        return self.name+other.name
        

obj1 = ABC("Aryan")
obj2 = ABC("XYZ")
print(obj1.name)
del obj1
# print(obj.name) # error
