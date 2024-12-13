def fibano(n):
	if n<=1:
		return n
	else:
		return fibano(n-1)+fibano(n-2)
num=int(input("enter the number of terms :"))
if num<=0:
	print("please enter a positive integer :")
else:
	print("fibanocci series :")
	for i in range(num):
		print(fibano(i),end=" ")
