import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.preprocessing import StandardScaler, LabelEncoder
from  sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split

file = pd.read_csv("/Users/shreyamhemanta/Documents/GitHub/Programming/Python/19.06.2023/fake_bills.csv")

le = LabelEncoder()
file['is_genuine'] = le.fit_transform(file['is_genuine'])

x = file.iloc[:,:-1]
y = file.iloc[:,-1]

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.33, random_state=42)

ss = StandardScaler()
x_scaled = ss.fit_transform(x)
x_train_scaled, x_test_scaled, y_train_scaled, y_test_scaled = train_test_split(x_scaled, y, train_size=0.33, random_state=42)

log = LogisticRegression()
log.fit(x_train, y_train)
y_pred = log.predict(x_test)
acc = accuracy_score(y_test, y_pred)
print(y_pred, "\n", acc)

log_scaled = LogisticRegression()
log_scaled.fit(x_train_scaled, y_train_scaled)
y_pred_scaled = log_scaled.predict(x_test_scaled)
acc_scaled = accuracy_score(y_test_scaled, y_pred_scaled)
print(y_pred_scaled, "\n", acc_scaled)