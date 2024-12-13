str=input("Enter the list of words separated by space :")
words=str.split()
length=0
for i in words:
	if len(i)>length:
		longestword=i
		length=len(i)
print(f"The longest word is {longestword} and its length is {length}")
