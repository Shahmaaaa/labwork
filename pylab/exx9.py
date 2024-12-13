def factorial(n):
	fact=1
	for i in range(1,n+1):
		fact*=i
	return fact
def permutation(n,r):
	return factorial(n)/factorial(n-r)
def combination(n,r):
	return factorial(n)/(factorial(r)*factorial(n-r))
n=int(input("Enter value of n :"))
r=int(input("Enter value of r :"))
if n>=r>=0:
	print(f"Number of permutations p({n},{r}) :{permutation(n,r)}")
	print(f"Number of combinations c({n},{r}) :{combination(n,r)}")
else:
	print("invalid option")
