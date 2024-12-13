n=int(input("Enter a number of terms :"))
sum=0
num=[]
for i in range(n):
	n1=int(input("Enter numbers :"))
	num.append(n1)
for i in num:
	sum+=i
print(f"sum of list:{sum}")

