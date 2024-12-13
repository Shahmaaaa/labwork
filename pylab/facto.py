n=int(input("Enter a number to find factorial :"))
fact=1
for i in range(1,n+1):
	fact*=i
if n<0:
	print("enter the number which is greater than zero")
else:
	print(f"factorial of {n} is {fact}")
