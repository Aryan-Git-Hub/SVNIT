# endcoded_message = "11 10 6"
endcoded_message = input("Enter the encoded message: ")
message_indexes = list(map(int, endcoded_message.split()))
for index in message_indexes:
    print(chr(index+64), end="")
print()