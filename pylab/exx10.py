def add(*args):
	return sum(args)
n=int(input("Enter the number of elements :"))
l=[]
for i in range(n):
	a=int(input("enter a number :"))
	l.append(a)
result=0
for i in l:
	result=result+i
print("sum is :",result)
