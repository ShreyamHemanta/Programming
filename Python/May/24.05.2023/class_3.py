class shape:
    def area(self, side1=None, side2=None):
        if side1 != None and side2 != None:
            return side1 * side2
        elif side1 != None :
            return side1*side1
        else:
            return("Invalid")
        print("Square")

if __name__ == "__main__":
    s1 = shape()
    s2 = shape()
    s3 = shape()
    print(s1.area(6))
    print(s2.area(5,6))
    print(s3.area())