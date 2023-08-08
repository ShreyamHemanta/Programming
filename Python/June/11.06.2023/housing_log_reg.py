import pandas as pd
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.model_selection import train_test_split

file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Data_files/Housing.csv")

l1 = LabelEncoder()
file['driveway'] = l1.fit_transform(file['driveway'])
file['recroom'] = l1.fit_transform(file['recroom'])
file['fullbase'] = l1.fit_transform(file['fullbase'])
file['gashw'] = l1.fit_transform(file['gashw'])
file['airco'] = l1.fit_transform(file['airco'])

x = file.iloc[:,:-1].values
y = file.iloc[:,-1].values

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_scaled = ss.fit_transform(x)
x_scaled_train, x_scaled_test, y_scaled_train, y_scaled_test = train_test_split(x_scaled, y, train_size=0.33, random_state=42)

log_reg = LogisticRegression()
log_reg.fit(x_train, y_train)
y_pred = log_reg.predict(x_test)
acu = accuracy_score(y_test, y_pred)*100

log_reg_scaled = LogisticRegression()
log_reg_scaled.fit(x_scaled_train, y_scaled_train)
y_scaled_pred = log_reg_scaled.predict(x_scaled_test)
acu_scaled = accuracy_score(y_scaled_test, y_scaled_pred)*100

print(y_pred)
print(acu)
print(y_scaled_pred)
print(acu_scaled)
