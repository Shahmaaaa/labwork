n=int(input("Enter a number :"))
temp=num
sum=0
while num>0:
	digit=num%10
	sum+=digit**3
	num//=10
if sum==temp:
	print(f"{num} is an armstrong number")
else:
	print(f"{num} is not an armstrong number")
