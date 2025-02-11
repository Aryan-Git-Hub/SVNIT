class ABC:
    def __init__(self, name):
        self.name = name
        print("HELlO")
    
    def __del__(self):
        print("delete")
        

obj = ABC("Aryan")
print(obj.name)
del obj
# print(obj.name) # error
