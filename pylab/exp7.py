upperlimit=int(input("Enter te upperlimit:"))
sum=0
for num in range(1,upperlimit):
	if num%6==0 and num%4!=0:
		sum+=num
print(f"The sum of all integers divisible by 6 but not by 4 below {upperlimit} is :{sum}")
