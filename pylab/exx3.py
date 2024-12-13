def isprime(num):
	if num<=1:
		return False
	for i in range(2,int(num**0.5)+1):
		if num%i==0:
			return False
	return  True
n=int(input("Enter value of n to find the nth prime number:"))
count=0
num=2
while count<n:
	if isprime(num):
		count+=1
		if count==n:
			print(f"the {n}th prime number is :{num}")
			break
	num+=1
