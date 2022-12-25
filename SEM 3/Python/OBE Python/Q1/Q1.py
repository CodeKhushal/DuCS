def check_Eligibility(n):
    if n > 1 and n < 29:
        for i in range(2, int(n / 2) + 1):
            if (n % i) == 0:
                print("Sorry")
                return False
            else:
                print("Proceed for Printing")
                return True

    else:
        print("Sorry")
        return False


def displayPattern(n):
    alpha = 65
    if check_Eligibility(n):
        for i in range(n):
            for j in range(n - i, 1, -1):
                print(" ", end="")
            print(chr(alpha), end="")
            for j in range(i):
                print("*", end="")
            for j in range(i - 1):
                print("*", end="")
            if i != 0:
                print(chr(alpha), end="")
            alpha = alpha + 1

            print()


n = int(input("Enter a Number - "))
displayPattern(n)
