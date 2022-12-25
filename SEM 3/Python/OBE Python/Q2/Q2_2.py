# 2nd part of Question 2
# 2)
def AppendList(list1):
    for i in List1:
        List2.append(i)
    return List2


# 3)
def removeDuplicates(List2):
    res = []
    for i in List2:
        if i not in res:
            res.append(i)
    List2 = res
    return List2


List1 = [5, 10, 15, 20, 25, 30, 35]
List2 = [10, 20, 30, 40, 50, 60, 70]

# 1)
# List1.append(40)
for i in range(0, len(List1)):
    if List1[i] == 35:
        List1.insert(i + 1, 40)
print(List1)

# 2)
print(AppendList(List1))

# 3)
print(removeDuplicates(List2))
