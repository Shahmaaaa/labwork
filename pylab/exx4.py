squarearea=lambda side:side*side
rectanglearea=lambda length,width:length*width
trianglearea=lambda base,height:0.5*base*height
side=int(input("enter the side of square: "))
length=int(input("enter the length of rectangle: "))
width=int(input("enter the width of rectangle: "))
base=int(input("enter the base of triangle: "))
height=int(input("enter the height of triangle: "))
print("area of square :",squarearea(side))
print("area of rectangle :",rectanglearea(length,width))
print("area of triangle :",trianglearea(base,height))
