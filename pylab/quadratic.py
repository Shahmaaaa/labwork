import math
a=float(input("Enter the coefficient x^2: "))
b=float(input("Enter the coefficient x: "))
c=float(input("Enter the constant: "))
print(f"Quadratic equation:{a}x^2+{b}x+{c}=0\n")
discriminant=b**2-4*a*c
if discriminant>0:
	root1=(b+math.sqrt(discriminant))/(2*a)
	root2=(b-math.sqrt(discriminant))/(2*a)
	print(f"The roots are real and different")
	print(f"The roots are {root1:2f}and {root2:2f}\n")
elif discriminant==0:
	root=b/(2*a)
	print(f"The roots are real and equal")
	print(f"The root is {root:2f}\n")
elif discriminant<0:
	realpart=b/(2*a)
	imaginarypart=math.sqrt(-discriminant)/(2*a)
	print(f"The  roots are complex")
	print(f"The roots are {realpart:2f}+{imaginarypart:2f}and{realpart:2f}-{imaginarypart:2f}\0")
else:
	print("The equation has no real roots!\n")
