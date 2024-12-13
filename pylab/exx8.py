def compare(s1,s2,n):
	if s1[:n]==s2[:n]:
		return True
	else:
		return False
s1=input("Enter string1 to compare:")
s2=input("Enter string2 to compare :")
n=int(input("Enter number of characters to compare :"))
result=compare(s1,s2,n)
if result==True:
	print(f"strings are equal ")
else:
	print(f"strings are not equal") 
