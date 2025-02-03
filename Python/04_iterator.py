num_list = [11, 12, 13, 14]

iterator = iter(num_list)
print(iterator)
while True:
    try:
        print(next(iterator))
    except StopIteration:
        break