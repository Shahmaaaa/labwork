str=input("Enter a string which has  reoccurance of first character: ")
firstchar=str[0]
newstr=firstchar+str[1: ].replace(firstchar,'$')
print(f"New string is :",newstr)
