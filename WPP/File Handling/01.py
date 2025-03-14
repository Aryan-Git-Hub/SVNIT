file = open("example.txt", "w")
try:
    file = open("example.txt", "r")
    content = file.read()
    print(content)
except FileNotFoundError:
    print("Error: file now found.")
else:
    print("File read successfully.")
finally:
    file.close()
    print("File closed.")