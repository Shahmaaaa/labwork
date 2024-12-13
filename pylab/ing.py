word=input("Enter a string :")
if word.endswith('ing'):
	str=word+'ly'
else:
	str=word+'ing'
print(f"{str}")
