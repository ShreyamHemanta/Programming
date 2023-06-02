if __name__ == "__main__":
    a = ([1, 2, 3], [4, 5, 6], [7, 8, 9])
    print(a)
    print(id(a[0]))
    print(id(a[0][0]))
    a[0][0] = 100
    print(a)
    print(id(a[0]))
    print(id(a[0][0]))
    