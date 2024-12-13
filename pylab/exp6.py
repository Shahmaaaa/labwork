N=int(input("Enter value of N :"))
primes=[]
for num in range(2,N+1):
	isprime=True
	for i in range(2,int(num**0.5)+1):
		if num%1==0:
			isprime=False
			break
		if isprime:
			primes.append(num)
print(f"Alternate prime numbers upto {N} are :")
for i in range(0,len(primes),2):
	print(prime[i])
