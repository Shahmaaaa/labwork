def factorial(n):
	fact=1
	for i in range(1,n+1):
		fact*=i
	return fact
n=int(input("enter value of n :"))
sum=0
for i in range(1,n+1):
	term=(i**i)/factorial(i)
	sum+=term
print("the sum of the series upto {n} term is {sum}")
