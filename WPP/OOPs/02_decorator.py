# decorators: a design pattern that allows adding new functionality to an existing object without altering its structure. It is a way to extend the functionality of a function without modifying it.
#   1) @classmethod: a method that is bound to the class and not the object of the class. It is used to change or modify class based attributes. It doesn't require creation of a class instance. It takes 'cls' as the first parameter.
#   2) @staticmethod: a method that doesn't receive an implicit first argument(i.e. self or cls). It is a method that belongs to the class and not the object of the class and doesn't require creation of a class instance.
#   3) @property: a built-in decorator that makes a method behave like an attribute. It allows defining a method that can be accessed like an attribute.

def div(a, b):
    print(a/b)


def smart_div(func1):
    def inner(a, b):
        if a < b:
            a, b = b, a
        return func1(a, b)
    return inner

div = smart_div(div)
div(2, 4)  # 2.0

