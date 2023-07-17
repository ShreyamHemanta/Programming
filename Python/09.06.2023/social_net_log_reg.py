import pandas as pd
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler


file = pd.read_csv("/home/shreyam/Documents/Programming/Python/Data_files/Social_Network_Ads (1).csv")

# x = np.array(file[['User ID'], ['Gender'],['Age'],['EstimatesSalary']])
# y = np.array(file['Purchased'])

# model = LogisticRegression()

l1 = LabelEncoder()

file['Gender'] = l1.fit_transform(file['Gender'])

# print(file)x)
# print(y)

x = file.iloc[:,:-1].values
y = file.iloc[:,-1].values

# print(x)
# print(y)

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss =StandardScaler()
X_scaled = ss.fit_transform(x)
X_scaled_train, X_scaled_test, y_scaled_train, y_scaled_test = train_test_split(X_scaled, y, train_size=0.33, random_state=42)

log = LogisticRegression()
log_scaled = LogisticRegression()

log.fit(x_train, y_train)
y_pred1 = log.predict(x_test)

log_scaled.fit(X_scaled_train, y_scaled_train)
y_pred2 = log_scaled.predict(X_scaled_test)

as1 = accuracy_score(y_test, y_pred1)*100
as2 = accuracy_score(y_test, y_pred2)*100

print(y_pred1)
print(as1)
print(y_pred2)
print(as2)