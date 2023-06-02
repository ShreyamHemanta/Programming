class number:
    def __init__(self, value=10):
        self.value = value
    
    def __add__(self, num):
        return number(self.value + num.value)
    
    def __mul__(self, num2):
        for each in range(num2.value):
            print(each)
        # return number(self.value * num2.value)
    

if __name__ == "__main__":
    n1 = number(5)
    n2 = number(2)
    n4 = number()
    n3 = n1 + n2
    print(n3.value)
    n4 = number(8)
    n5 = number(3)
    n6  = n4 * n5
    print(n6.value)

