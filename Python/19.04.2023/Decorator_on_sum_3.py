def outer(fn):
    def inner(a, b):
        return (a**b)
    return inner

@outer
def sum(a, b):
    return(sum)

if __name__ == "__main__":
    result = sum(2, 10)
    print(result)