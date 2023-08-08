if __name__ == "__main__":
    #Find all of the numbers from 1–1000 that are divisible by 8
    l1 = [x for x in range(1,1000) if x % 8 == 0]
    print(l1)
    print("\n")


    #Find all of the numbers from 1–1000 that have a 6 in them
    l2 = [x for x in range(1, 1000) if "6" in str(x)]
    print(l2)
    print("\n")


    #Count the number of spaces in a string
    s1 = "Practice Problems to Drill List Comprehension in Your Head."
    count = [x for x in s1 if " " in str(x)]
    print(len(count))
    print("\n")

    #Remove all of the vowels in a string
    s1 = "Practice Problems to Drill List Comprehension in Your Head."
    vowels = "aeiouAEIOU"
    s2 = "".join([x for x in s1 if x not in vowels])
    print(s2)
    print("\n")


    #Find all of the words in a string that are less than 5 letters
    s1 = "Practice Problems to Drill List Comprehension in Your Head."
    word = s1.split(" ")
    words = [x for x in word if len(x) < 5]
    print(words)
    print(len(words))
    print("\n")


    # Use a dictionary comprehension to count the length of each word in a sentence (use string above)
    # Use a nested list comprehension to find all of the numbers from 1–1000 that are divisible by any single digit besides 1 (2–9)
    # For all the numbers 1–1000, use a nested list/dictionary comprehension to find the highest single digit any of the numbers is divisible by