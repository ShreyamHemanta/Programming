def retry(n):
    def outer(fn):
        def inner(a):
            for i in range(1,n+1):
                if i == 1:
                    fn(a)
                elif i == 2:
                    a = "Hello, " + a
                    fn(a)
                else:
                    a = "Am I audible, " + a
                    fn(a)
        return inner
    return outer

@retry(3)
def greet(name):
    print(name)

if __name__ =="__main__":
    greet("Raj")