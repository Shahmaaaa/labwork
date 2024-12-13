number=int(input("Enter the number to find its factors"))
i=1
factor=[]
while i<=number:
	if number%i==0:
		factor.append(i)
		i+=1
		print(f"The factor of {number} are : {factor}")

