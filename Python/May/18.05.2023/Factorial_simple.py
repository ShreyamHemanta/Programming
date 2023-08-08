#Calculate the factorial of a number without recussion

num = int(input("Enter a number : "))
fact = 1

while(num != 0):
    fact = fact * num
    num -= 1

print(fact)