if __name__ =="__main__":
    
    #inserting a list of elements into a set

    s1 = {1, 2, 3}
    l1 = [4, 5, 6]
    print(s1)
    s1.update(l1)
    print(s1)
    print("\n")



    #store the identical elements from 2 sets in new set

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    s3 = s1.intersection(s2)
    print(s3)
    print("\n")



    #getting only unique items from a set

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    s3 = s1.union(s2)
    print(s3)
    print("\n")



    #remove the items from 1st set that occur in 2nd set

    # s1 = {1, 2, 3, 4, 5}
    # s2 = {2, 4, 6, 8, 10}
    # for i in range(5):
    #     for j in range(5):
    #         if s1[i] == s2[j]:
    #             s1.remove(s1[i])
    # print(s1)
    # print(s2)

    # set1 = {10,20, 30}
    # set2 = {20, 40, 50}

    # set1.difference_update(set2)
    # print(set1)
    # print("\n")



    #remove items from set

    s = {1, 2, 3, 4, 5}
    s.difference_update({3, 4})
    print(s)
    print("\n")



    #return elements present in set 1 or set 2 but not both

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    s3 = s1.symmetric_difference(s2)
    print(s3)
    print("\n")



    #to check and display for common elements in set

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    if s1.isdisjoint(s2):
        print("Common elements not present")
    else:
        print("Common elements present")
        print(s1.intersection(s2))
    print("\n")



    #updating set 1 by adding elements from set 2 except the common elements 

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    s1.symmetric_difference_update(s2)
    print(s1)
    print("\n")



    #remove elements from set 1 that are not common in both set 1 and set 2

    s1 = {1, 2, 3, 4, 5}
    s2 = {2, 4, 6, 8, 10}
    s1.intersection_update(s2)
    print(s1)