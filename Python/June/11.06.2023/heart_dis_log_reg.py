import pandas as pd
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split

file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Data_files/heart_dis.csv")

l1 = LabelEncoder()
file['male'] = l1.fit_transform(file['male'])
file['age'] = l1.fit_transform(file['age'])
file['education'] = l1.fit_transform(file['education'])
file['currentsmoker'] = l1.fit_transform(file['currentSmoker'])
file['cigsPerday'] = l1.fit_transform(file['cigsPerDay'])
file['BPMeds'] = l1.fit_transform(file['BPMeds'])
file['prevalentStroke'] = l1.fit_transform(file['prevalentStroke'])
file['prevalentHyp'] = l1.fit_transform(file['prevalentHyp'])
file['diabetes'] = l1.fit_transform(file['diabetes'])
file['totChol'] = l1.fit_transform(file['totChol'])
file['sysBP'] = l1.fit_transform(file['sysBP'])
file['diaBP'] = l1.fit_transform(file['diaBP'])
file['BMI'] = l1.fit_transform(file['BMI'])
file['heartRate'] = l1.fit_transform(file['heartRate'])
file['glucose'] = l1.fit_transform(file['glucose'])
file['TenYearCHD'] = l1.fit_transform(file['TenYearCHD'])

x = file.iloc[:,:-1]
y = file.iloc[:,-1]

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_scaled = ss.fit_transform(x)
x_scaled_train, x_scaled_test, y_scaled_train, y_scaled_test = train_test_split(x_scaled, y, train_size=0.33, random_state=42)

log_reg = LogisticRegression()
log_reg.fit(x_train, y_train)
y_pred = log_reg.predict(x_test)
acc = accuracy_score(y_test, y_pred)*100

log_reg_scaled = LogisticRegression()
log_reg_scaled.fit(x_scaled_train, y_scaled_train)
y_scaled_pred = log_reg_scaled.predict(x_scaled_test)
acc_scaled = accuracy_score(y_scaled_test, y_scaled_pred)*100

print(y_pred)
print(acc)
print(y_scaled_pred)
print(acc_scaled)