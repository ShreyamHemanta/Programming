import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
import pickle

# file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Housing.csv")

model = pickle.load(open("/home/shreyam/Documents/Programming/lr_model.pkl","rb"))

test_data = np.array([9000]).reshape(-1,1)

result = model.predict(test_data)
print(result)