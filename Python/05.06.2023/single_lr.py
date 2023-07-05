<<<<<<< HEAD
import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
import pickle

file = pd.read_csv("C:/Users/KIIT/Downloads/archive/1.01. Simple linear regression.csv")

x = np.array(file['SAT']).reshape((-1, 1))
y = np.array(file['GPA'])

test_data = np.array([1800, 1768]).reshape(-1,1)

# print(np.array(x).shape)
# print(np.array(y).shape)

model = LinearRegression()
model.fit(x,y)
model_name = "./lr_model.pickle"

# pickle.dump(model, open(model_name, "wb"))

# model prediction 
pred = model.predict(test_data)
print("score", model.score(x,y))
print("intercept", model.intercept_)
print("coefficient", model.coef_)
=======
import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
import pickle

file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Data_files/1.01. Simple linear regression.csv")

x = np.array(file['SAT']).reshape((-1, 1))
y = np.array(file['GPA'])

test_data = np.array([1800, 1768]).reshape(-1,1)

# print(np.array(x).shape)
# print(np.array(y).shape)

model = LinearRegression()
model.fit(x,y)
model_name = "./lr_model.pkl"

pickle.dump(model, open(model_name, "wb"))

# model prediction 
pred = model.predict(test_data)
print("score", model.score(x,y))
print("intercept", model.intercept_)
print("coefficient", model.coef_)
>>>>>>> 5af07be470065a6ec2b5a38d72e512f9462f7be5
print(pred)