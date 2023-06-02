import numpy as np

arr0 = np.array(42)
arr1 = np.array([1, 2, 3, 4, 5])
arr2 = np.array([[1, 2, 3],[4, 5, 6]])
# arr3 = np.array([[1, 2, 3], [4, 5, 6]],[[7, 8, 9],[1, 2, 3]])

print(arr0, type(arr0))

print(np.__version__)

print(arr0.ndim)
# print(arr2.ndim)

print(arr0.dtype)

newarr = arr0.astype(float)
# newarr = arr0.astype(int)
print(newarr.dtype)