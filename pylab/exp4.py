import math
squareevenlist=[]
l=int(input("enter an lowerlimit :"))
m=int(input("enter a upperlimit :"))
for i in range(l,m):
	isalleven=True
	temp=i
	while temp>0:
		digit=temp%10
		if(digit%2)!=0:
			isalleven=False
			break
		temp=temp//10
	if isalleven:
		if math.isqrt(i)**2==i:
			squareevenlist.append(i)
print(f"four digit perfect squares with all even digit:{squareevenlist}")
