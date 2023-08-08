#tuple, shallowCopy, deepCopy


# tupple_1 = (1, 2)

# tupple_1[0] = 5

# print(tupple_1)

# import copy
# a = [1,2,3,4,5]
# b = a
# print(id(b), b)
# a[0] = 10
# print(id(b), b)
# d = copy.deepcopy(a)
# print(d)
# a[2] = 30
# print(d)
# print(a)
# print(id(copy.deepcopy(a)))

# a = ([[1,2,3], [4,5,6]],[[9,8,7],[21,3,4]])
# print(type(a))
# a[0][0].append(10)
# print(a)

# a = 5
# b = 5
# print(a == b)
# print(a is b)
# print(id(a), id(b))
# c = "hello"
# d = "hello"
# print(a is b, a == b)

# p = 5000
# q = 5000
# print(p ==q , p is q)