def fibonacci(a):
    x = 0
    y = 1
    
    if (a >= 1):
        c = x + y
        x = y
        y = c
        a -= a
    return c

if __name__ == "__main__":
    num = int(input("Enter a number : "))
    fibo = fibonacci(num)
    print(fibo)