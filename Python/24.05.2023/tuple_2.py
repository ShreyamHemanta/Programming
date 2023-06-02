if __name__ =="__main__":
    #reversing tuple
    a = (1, 2, 3, 4, 5)
    for i in  range(-1,-6,-1):
        print(a[i], end=" ")
    # a = a[::-1]
    # print(a)
    print("\n")

   

    #accesing the value of 20
    b = ("Orange", [10, 20, 30], (5, 15, 25))
    print(b[1][1])
    print("\n")



    #unpacking tuple values
    c = (1, 2, 3, 4, 5)
    c1 = c[0]
    c2 = c[1]
    c3 = c[2]
    c4 = c[3]
    c5 = c[4]
    print(c1, c2, c3, c4, c5)
    #a, b, c, d = tuple1
    print("\n")



    #swap 2 tuples
    d = (1, 2)
    e = (3, 4)
    f = ()
    print(d, e)
    f = d
    d = e
    e = f
    print(d, e)
    # tuple1 = (11, 22)
    # tuple2 = (99, 88)
    # tuple1, tuple2 = tuple2, tuple1
    # print(tuple2)
    # print(tuple1)
    print("\n")



    #copying some elements from one tuple to another
    g = (1, 2, 3)
    h = ()
    print(g, h)
    h = g[1],g[2]
    print(g, h)
    # tuple1 = (11, 22, 33, 44, 55, 66)
    # tuple2 = tuple1[3:-1]
    # print(tuple2)
    print("\n")



    #sorting a tuple of tuple by send element
    # p = (("a", 4), ("b", 3),("c", 2),("d", 1))
    # print(p)
    # for i in range(0,4):
    #     for j in range(i+1,4):
    #         if p[i] > p[j]:
    #             p[i], p[j] = p[j], p[i]
    # print(p)

    tuple1 = (('a', 23), ('b', 37), ('c', 11), ('d', 29))
    tuple1 = tuple(sorted(list(tuple1), key=lambda x: x[1]))
    print(tuple1)



    #count number of occurances of 50
    r = (10, 20, 20, 30, 40, 50, 10, 50, 40, 50)
    count = 0
    for i in range(len(r)):
        if r[i] == 50:
            count += 1
    print("Number of occurances of 50 is ",count)
    #tuple1 = (50, 10, 60, 70, 50)
    #print(tuple1.count(50))
    print("\n")



    #check if all the elements in the tuple are same
    # s = (1, 2, 3, 4, 5)
    # t = (1, 1, 1, 1, 1)
    # for i in range(5):
    #     if s[i] == s[i+1]:
    #         print("True")
    #     else:
    #         print("False")
    # for j in range(5):
    #     if t[j] == t[j+1]:
    #         print("True")
    #     else:
    #         print("False")

    def check(t):
        return all(i == t[0] for i in t)
    tuple1 = (45, 45, 45, 45)
    print(check(tuple1))
