import numpy as np

list1 = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20])

max = -1
for i in range(20):
    for j in range(20,20-i,-1):
        if np.count(list1[i]) == np.count(list1[j]) and max > i:
            max = i
print(max)
