import pandas as pd
from sklearn.linear_model import LogisticRegression, LinearRegression
from sklearn.metrics import accuracy_score, mean_absolute_error
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler, MinMaxScaler
import matplotlib.pyplot as plt

file = pd.read_csv("/Users/shreyamhemanta/Documents/GitHub/Programming/Python/DmdwProject/creditcard_2023.csv")

x = file.iloc[:, :-1]
y = file.iloc[:, -1]

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_train_scaled = ss.fit_transform(x_train)
x_test_scaled = ss.transform(x_test)

mm = MinMaxScaler()
x_train_min_max_scaled = mm.fit_transform(x_train)
x_test_min_max_scaled = mm.transform(x_test)

print("\nUnscaled Linear Regression")
lin = LinearRegression()
lin.fit(x_train, y_train)
y_pred_lin = lin.predict(x_test)
acc_lin = (1 - mean_absolute_error(y_test, y_pred_lin)) * 100
print("Linear Regression MAE:", acc_lin)

print("\nStandard Scaled Linear Regression")
lin_scaled = LinearRegression()
lin_scaled.fit(x_train_scaled, y_train)
y_pred_scaled_lin = lin_scaled.predict(x_test_scaled)
acc_scaled_lin = (1 - mean_absolute_error(y_test, y_pred_scaled_lin)) * 100
print("Linear Regression with Standard Scaling MAE:", acc_scaled_lin)

print("\nMin-Max Scaled Linear Regression")
lin_min_max_scaled = LinearRegression()
lin_min_max_scaled.fit(x_train_min_max_scaled, y_train)
y_pred_min_max_scaled_lin = lin_min_max_scaled.predict(x_test_min_max_scaled)
acc_min_max_scaled_lin = (1 - mean_absolute_error(y_test, y_pred_min_max_scaled_lin)) * 100
print("Linear Regression with Min-Max Scaling MAE:", acc_min_max_scaled_lin)

# Plot the Linear Regression results
plt.figure(figsize=(10, 6))
plt.scatter(x_test, y_test, label='Actual Data')
plt.plot(x_test, y_pred_lin, color='red', label='Linear Regression Prediction')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.title('Linear Regression Results')
plt.show()

print("\nUnscaled Logistic Regression")
log = LogisticRegression()
log.fit(x_train, y_train)
y_pred_log = log.predict(x_test)
acc_log = accuracy_score(y_test, y_pred_log) * 100
print("Logistic Regression Accuracy:", acc_log)

print("\nStandard Scaled Logistic Regression")
log_scaled = LogisticRegression()
log_scaled.fit(x_train_scaled, y_train)
y_pred_scaled_log = log_scaled.predict(x_test_scaled)
acc_scaled_log = accuracy_score(y_test, y_pred_scaled_log) * 100
print("Logistic Regression with Standard Scaling Accuracy:", acc_scaled_log)

print("\nMin-Max Scaled Logistic Regression")
log_min_max_scaled = LogisticRegression()
log_min_max_scaled.fit(x_train_min_max_scaled, y_train)
y_pred_min_max_scaled_log = log_min_max_scaled.predict(x_test_min_max_scaled)
acc_min_max_scaled_log = accuracy_score(y_test, y_pred_min_max_scaled_log) * 100
print("Logistic Regression with Min-Max Scaling Accuracy:", acc_min_max_scaled_log)

# Plot the Logistic Regression results
plt.figure(figsize=(10, 6))
plt.scatter(x_test, y_test, label='Actual Data')
plt.plot(x_test, y_pred_log, color='blue', label='Logistic Regression Prediction')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.title('Logistic Regression Results')
plt.show()