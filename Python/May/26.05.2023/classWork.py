if __name__ =="__main__":
    
    for i in range(100):
        if i % 7 == 0 and i % 3 == 0:
            print(i)
    
    list_1 = [x for x in range(100) if x % 7 == 0 and x % 3 == 0]
    print(list_1)