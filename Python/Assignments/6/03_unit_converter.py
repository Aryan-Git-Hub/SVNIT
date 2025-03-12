class UnitConverter:
    # inches, feet, yards, miles, kilometers, meters, centimeters, and millimeters
    __d = {"inches": 1, "feet": 12, "yards": 36, "miles": 63360, "kilometers": 39370.1, "meters": 39.3701, "centimeters": 0.393701, "millimeters": 0.0393701}
    def __init__(self, length, unit):
        if not UnitConverter.__d.get(unit):
            print("Wrong input!")
            exit()
        self.length_in_inches = UnitConverter.__d.get(unit)*length
        self.unit = unit
    
    @property
    def inches(self):
        return self.length_in_inches
    
    @property
    def feet(self):
        return self.length_in_inches/UnitConverter.__d.get("feet")
    
    @property
    def yards(self):
        return self.length_in_inches/UnitConverter.__d.get("yards")
    
    @property
    def miles(self):
        return self.length_in_inches/UnitConverter.__d.get("miles")
    
    @property
    def kilometers(self):
        return self.length_in_inches/UnitConverter.__d.get("kilometers")
    
    @property
    def meters(self):
        return self.length_in_inches/UnitConverter.__d.get("meters")
    
    @property
    def centimeters(self):
        return self.length_in_inches/UnitConverter.__d.get("centimeters")
    
    @property
    def millimeters(self):
        return self.length_in_inches/UnitConverter.__d.get("millimeters")


length = float(input("Enter length: "))
unit = input("Enter unit: ")

a = UnitConverter(length, unit)
print("\ninches:", a.inches)
print("feet:", a.feet)
print("yards:", a.yards)
print("miles:", a.miles)
print("kilometers:", a.kilometers)
print("meters:", a.meters)
print("centimeters:", a.centimeters)
print("millimeters:", a.millimeters)