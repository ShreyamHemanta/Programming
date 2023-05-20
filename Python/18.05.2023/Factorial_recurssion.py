num = int(input("Enter a number : "))

def factorial(a):
    if (a > 1):
        a = a * factorial(a-1)
    return a

fact = factorial(num)
print(fact)