upperlimit=int(input("Enter the upper limit:"))
for num in range(1,upperlimit+1):
	sum=0
for digit in str(num):
	sum+=int(digit)
	if sum>1:
		is_prime=True
		for i in range(2,int(sum**0.5)+1):
			if sum%i==0:
				is_prime=False
			if is_prime:
				print("The sum of digits of {num}: {sum}, is a prime")

