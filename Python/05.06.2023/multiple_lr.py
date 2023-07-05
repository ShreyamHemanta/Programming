import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression

file = pd.read_csv("C:/Users/KIIT/Downloads/50_Startups.csv")

x = np.array(file[['R&D Spend', 'Administration', 'Marketing Spend']])
y = np.array(file['Profit'])

model = LinearRegression()
model.fit(x,y)

test_data = np.array([[1560, 1780, 9000]])

result = model.predict(test_data)
print("Predicted data : ",result)

print("Score ",model.score(x,y))
print("Intercept", model.intercept_)
print("Coefficient", model.coef_)