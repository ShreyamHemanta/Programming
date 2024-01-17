import pandas as pd
from sklearn.linear_model import LogisticRegression, LinearRegression
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, mean_absolute_error
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler

file = pd.read_csv("/Users/shreyamhemanta/Documents/GitHub/Programming/Python/DmdwProject/creditcard_2023.csv")

print(file)

x = file.iloc[:,:-1]
y = file.iloc[:,-1]

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_scaled = ss.fit_transform(x)
x_train_scaled, x_test_scaled, y_train_scaled, y_test_scaled = train_test_split(x_scaled, y, train_size=0.33, random_state=42)

print("\nUnscaled Linear Regression")
lin = LinearRegression()
lin.fit(x_train, y_train)
y_pred_lin = lin.predict(x_test)
acc_lin = (1 - mean_absolute_error(y_test, y_pred_lin))*100
print(y_pred_lin, "\n", acc_lin)

print("\nScaled Linear Regression")
lin_scaled = LinearRegression()
lin_scaled.fit(x_train_scaled, y_train_scaled)
y_pred_scaled_lin = lin_scaled.predict(x_test_scaled)
acc_scaled_lin = (1 - mean_absolute_error(y_test_scaled, y_pred_scaled_lin))*100
print(y_pred_scaled_lin, "\n", acc_scaled_lin)

print("\nUnscaled Logistic Regression")
log = LogisticRegression()
log.fit(x_train, y_train)
y_pred_log = log.predict(x_test)
acc_log = accuracy_score(y_test, y_pred_log)*100
print(y_pred_lin, "\n", acc_log)

print("\nScaled Logistic Regression")
log_scaled = LogisticRegression()
log_scaled.fit(x_train_scaled, y_train_scaled)
y_pred_scaled_log = log_scaled.predict(x_test_scaled)
acc_scaled_log = accuracy_score(y_test_scaled, y_pred_scaled_log)*100
print(y_pred_scaled_log, "\n", acc_scaled_log)

print("/Unsclaled Random Forest")
rf = RandomForestClassifier()
rf.fit(x_train, y_train)
y_pred = rf.predict(x_test)
acc_log