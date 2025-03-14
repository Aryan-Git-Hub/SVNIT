with open("example.txt", 'r') as file:
    content = file.read()
    count = 0
    for c in content:
        if c in "aeiouAEIOU":
            count += 1
    print(f"Number of vowels in the file are: {count}")