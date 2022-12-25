import math


def AreaAndPerimeter(side1, side2, side3):
    perimeter = side1+side2+side3
    s = float((side1+side2+side3)/2)
    area = math.sqrt(s*(s-side1)*(s-side2)*(s-side3))
    result = (perimeter, area)
    l = [side1, side2, side3]
    l.sort()

    assert l[2] < (
        l[1]+l[0]), "Error : Sum of two sides should be greater than the third side"
    return result


if __name__ == '__main__':
    side1 = float(input("Enter the length of side 1 :"))
    side2 = float(input("Enter the length of side 2 :"))
    side3 = float(input("Enter the length of side 3 :"))

    perimeter, area = AreaAndPerimeter(side1, side2, side3)

    print(f"The area of triangle is : {area:.2f}")
    print(f"The perimeter of triangle is : {perimeter}")
