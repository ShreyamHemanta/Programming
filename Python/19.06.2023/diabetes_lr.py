import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler

file = pd.read_csv("/Users/shreyamhemanta/Documents/Programming/Python/diabetes.csv")

x = file.iloc[:,:-1]
y = file.iloc[:,-1]

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_scaled = ss.fit_transform(x)
x_train_scaled, x_test_scaled, y_train_scaled, y_test_scaled = train_test_split(x_scaled, y, train_size=0.33, random_state=42)

log = LogisticRegression()
log.fit(x_train, y_train)
y_pred = log.predict(x_test)
acc = accuracy_score(y_test, y_pred)*100
print(y_pred, "\n", acc)

log_scaled = LogisticRegression()
log_scaled.fit(x_train_scaled, y_train_scaled)
y_pred_scaled = log_scaled.predict(x_test_scaled)
acc_scaled = accuracy_score(y_test_scaled, y_pred_scaled)*100
print(y_pred_scaled, "\n", acc_scaled)