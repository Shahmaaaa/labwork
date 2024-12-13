names=["shahma","Rinu","Nafia","Aparna"]
frequency=0
for name in names:
	frequency+=name.lower().count('a')
print(f"Occurence of 'a' in list is {frequency}")
