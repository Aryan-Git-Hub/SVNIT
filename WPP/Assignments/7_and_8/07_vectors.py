import math

class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def magnitude(self):
        return (self.x ** 2 + self.y ** 2) ** 0.5
    
    def rotation(self):
        return math.atan(self.y/self.x)
    
    def __add__(self, other):
        return Vector2D(self.x + other.x, self.y + other.y)
    
    def dot(self, other):
        return self.x * other.x + self.y * other.y
    
    def __mul__(self, other):
        return self.x * other.y - self.y * other.x


class Vector3D(Vector2D):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z
    
    def magnitude(self):
        return (self.x ** 2 + self.y ** 2 + self.z ** 2) ** 0.5
    
    def rotation(self):
        return math.degrees(math.atan((self.y**2+self.z**2)**0.5/self.x))
    
    def __add__(self, other):
        return Vector3D(self.x + other.x, self.y + other.y, self.z + other.z)
    
    def dot(self, other):
        return self.x * other.x + self.y * other.y + self.z * other.z
    
    def __mul__(self, v2):
        x = self.y * v2.z - self.z * v2.y
        y = self.z * v2.x - self.x * v2.z
        z = self.x * v2.y - self.y * v2.x
        return Vector3D(x, y, z)


v2d_1 = Vector2D(3, 4)
v2d_2 = Vector2D(1, 2)
print("2D Vector Magnitude:", v2d_1.magnitude())
print("2D Vector Angle with X-axis:", v2d_1.rotation())
print("Dot Product (2D):", Vector2D.dot(v2d_1, v2d_2))
print("Cross Product (2D):", v2d_1 * v2d_2)

v3d_1 = Vector3D(3, 4, 5)
v3d_2 = Vector3D(1, 2, 3)
print("\n3D Vector Magnitude:", v3d_1.magnitude())
print("Dot Product (3D):", Vector3D.dot(v3d_1, v3d_2))
print("Cross Product (3D):", v3d_1 * v3d_2)
print("3D Vector Angle with X-axis:", v3d_1.rotation())