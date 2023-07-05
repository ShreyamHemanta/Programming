import pandas as pd
import random
import os

data = []

for i in range(20):
    id_val = random.randint(0, 1000)
    salary_val = random.randint(1, 100000)
    data.append([id_val, salary_val])

dataFrame_demo = pd.DataFrame(data, columns = ['Id1', 'Salary'])
# print(os.getcwd())
# print(dataFrame_demo.head())
# path = os.path.join(os.getcwd(), "employee1.csv")
# print(path)
# # dataFrame_demo.to_excel("test.xlsx", "w+")
# print(dataFrame_demo.to_csv())
# dataFrame_demo.to_csv("testac.csv")
# print(dataFrame_demo)

# dataFrame_demo.to_csv("C:\\Users\\KIIT\\Documents\\GitHub\\Programming\\Python\\01.06.2023\\employee.csv")

print(dataFrame_demo)
# file_name = open("C:/Users/KIIT/Documents/GitHub/Programming/Python/01.06.2023/employee.csv", 'a')
file_name = "abc.csv"
dataFrame_demo.to_csv(file_name)