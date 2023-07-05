<<<<<<< HEAD
import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures

file = pd.read_csv("C:/Users/KIIT/Downloads/Social_Network_Ads.csv")

x = np.array(file[['User ID', 'Age', 'Purchased']])
y = np.array(file['EstimatedSalary'])

transformer = PolynomialFeatures()

transformer.fit(x)

x_ = transformer.transform(x)

x_ = PolynomialFeatures().fit_transform(x)

model = LinearRegression().fit(x_,y)

# test_data = np.array([[15609586, 17, 1]])

print("Score : ",model.score(x_,y))
print("Intercept : ",model.intercept_)
print("Coefficient : ",model.coef_)

y_ = model.predict(x_)
print("Result : ",y_)
=======
import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures

file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Data_files/Social_Network_Ads.csv")

x = np.array(file[['User ID', 'Age', 'Purchased']])
y = np.array(file['EstimatedSalary'])

transformer = PolynomialFeatures()

transformer.fit(x)

x_ = transformer.transform(x)

x_ = PolynomialFeatures().fit_transform(x)

model = LinearRegression().fit(x_,y)

# test_data = np.array([[15609586, 17, 1]])

print("Score : ",model.score(x_,y))
print("Intercept : ",model.intercept_)
print("Coefficient : ",model.coef_)

y_ = model.predict(x_)
print("Result : ",y_)


>>>>>>> 5af07be470065a6ec2b5a38d72e512f9462f7be5
