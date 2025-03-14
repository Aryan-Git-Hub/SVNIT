feets = int(input("Enter length in feet: "))
units = [["inches", feets*12], ["yards", feets/3], ["miles", feets*0.000189394], ["millimeters", feets*304.8], ["centimeters", feets*30.48], ["meters", feets*0.3048], ["kilometers", feets*0.0003048]]
option = int(input("Enter option for inches, yards, miles, millimeters, centimeters, meters, kilometers as 1, 2, 3, 4, 5, 6, 7 respectively: "))
print("Your Answer is:", units[option-1][1])