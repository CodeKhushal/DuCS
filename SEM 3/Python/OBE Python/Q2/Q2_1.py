# 2 ka 1st part
str1 = "Ronald Brown"
str2 = "Richard Brown"
str3 = "Harry/* Potter% is ^a fictional !! character-&"

# 1
def append_Strings(str1, str2):
    str4 = str1 + str2
    print(str4)


append_Strings(str1, str2)

# 2
str4 = "Ronald BrownRichard Brown"
str5 = ""
str6 = ""
for i in str4:
    if "a" <= i <= "z":
        str5 += i
    elif i == " ":
        continue
    else:
        str6 += i
str4 = str5 + str6

subString = "row"
count = 0
l1 = len(str4)
l2 = len(subString)
for i in range(l1 - l2 + 1):
    j = 0
    while j < l2:
        if str4[i + j] != subString[j]:
            break
        j += 1
    if j == l2:
        count += 1
        j = 0

print(str4)
print(count)

# 3
alphanum = ""
for character in str3:
    if character.isalnum():
        alphanum += character
    elif character == " ":
        alphanum += " "
str3 = alphanum
print(str3)
