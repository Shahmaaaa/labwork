text=input("Enter the text :")
words=text.split()
wordcount={}
for i in words:
	i=i.lower()
	if i in wordcount:
		wordcount[i]+=1
	else:
		wordcount[i]=1
print(f"word occurences are :{wordcount}")
