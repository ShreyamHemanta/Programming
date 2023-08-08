def outer(fn):
    def inner(a, b):
        return (a * b)
    return inner

@outer
def sum(a, b):
    return (a+b)

if __name__ == "__main__":
    result  = sum(5, 10)
    print(result)