import pandas as pd
import numpy as np

a = np.array([1,2,3])
b = np.array([6,7,8])
print(a+b)

df = pd.read_csv("filepathname")

for index, row in df.iterrows():
    print(row)


