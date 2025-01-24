def main():
    def func(name, *fav_subject, **kwargs):
        print(name, "Likes to read")
        print(fav_subject) # tuple
        print(kwargs) # dict
        for subject in fav_subject:
            print(subject)

    # func("Aryan", "Praveen", "Java")
    # The * operator unpacks the elements of an iterable (like a list, tuple, or set)
    func("Aryan", *("Praveen", "Java")) # same as previous
    print()
    func("Aryan", **{"Name":"C++"})


    # The ** operator unpacks the key-value pairs of a dictionary
    data = {'x': 1, 'y': 2}
    print({**data, 'z': 3})  # Output: {'x': 1, 'y': 2, 'z': 3}

if __name__=="__main__":
    main()