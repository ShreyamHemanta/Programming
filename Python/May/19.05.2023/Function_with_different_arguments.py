def sum(a, b, c, d=1, e=2, f=3):
    return(a + b + c + d + e + f)

if __name__ =="__main__":
    first = sum(5,6,7,d=5)
    second = sum(5,6,7,e=9,f=8)
    third = sum(5,6,7,d=5,e=6,f=7)
    fourth = sum(5,6,7)
    print(first)
    print(second)
    print(third)
    print(fourth)