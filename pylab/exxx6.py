t=int(input("enter number of terms :"))
terms_lst=[]
for i in range(t):
	terms=int(input("enter the terms :"))
	terms_lst.append(terms)
multiplefn=filter(lambda x:x%3==0,terms_lst)
print("multiples of 3 are:")
mulfnlst=list(multiplefn)
print(mulfnlst)
