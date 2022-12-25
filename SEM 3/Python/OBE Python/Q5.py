def SortAndSearch(Number_List, Num):
    noOfComparisons = 0
    for i in range(1, len(Number_List)):  # insertion sort algo start
        key = Number_List[i]
        j = i - 1
        noOfComparisons += 1
        while j >= 0 and key < Number_List[j]:
            Number_List[j + 1] = Number_List[j]
            j -= 1
        Number_List[j + 1] = key  # insertion sort algo ends

    flag = bool(0)
    for i in range(len(Number_List)):  # linear search start
        if Number_List[i] == Num:
            print("Position of ", Num, "in sorted list: ", i)
            flag = bool(1)
    if flag == bool(0):
        print("Number is not found in the list")  # linear search ends

    return Number_List, noOfComparisons


n = int(input("Enter number of elements: "))
Number_List = []
for i in range(0, n):
    x = int(input("Enter value: "))
    # Number_List += [x,]
    Number_List.append(x)

Num = int(input("Enter number to be searched: "))
SaS = SortAndSearch(Number_List, Num)
print("Sorted list: ", SaS[0])
print("Number of comparisons: ", SaS[1])
