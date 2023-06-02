import pandas as pd 

csv_file = pd.read_csv("C:/Users/KIIT/Documents/GitHub/Programming/Python/test.csv")

csv_file.head(10)     #fiest 10 rows
csv_file.tail(10)     #last 10 rows
csv_file.dtypes       #to show all the attributes and their data types

# excel_file = pd.read_excel("C:/Users/KIIT/Documents/GitHub/Programming/Python/test.xls")

# cities = pd.DataFrame([['Sacramento', 'California'], ['Miami', 'Florida']], columns=['City', 'State'])
# cities.to_csv('cities.csv')

# cities.to_excel('cities.xls')