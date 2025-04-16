#Garrett Poppe


def triangle(base,height):
    area = 0.5 * base * height
    return area

def printHello():
    print("Hello World")


x = int(input("Enter the base of your right triangle: "))
y = int(input("Enter the height of your right triangle: "))

triArea = triangle(x,y)

print("The area of the triangle is: ",triArea)

print("A triangle with 4 and 8 values is ",triangle(4,8))

printHello()
printHello()
printHello()
printHello()
printHello()

