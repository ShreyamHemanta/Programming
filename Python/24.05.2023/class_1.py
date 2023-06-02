class student:
    def __init__(self, name, marks, age):
        self.name = name
        self.marks = marks
        self.age = age

if __name__ == "__main__":
    s1 = student("abc", 90, 19)
    s2 = student("pqr", 85, 18)
    print(s1.name, s1.marks, s1.age)
    print(s2.name, s2.marks, s2.age)