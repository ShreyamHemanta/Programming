import copy

if __name__ == "__main__":
    a = [50, 67, 89, 90]
    # b = copy.copy(a)
    b = a
    print(id(a), id(b))
    print(a, b)
    print("After changing a")
    a[0] = 65
    print(a, b)


    x = 600
    y = copy.deepcopy(x)
    print("\n",id(x), id(y))
    print(x, y)
    print("After changing x")
    x = 560
    print(x, y)

    p = 100
    q = p
    print("\n",id(p),id(q))
    print(p, q)
    print("After changing p")
    p = 150
    print(p, q)