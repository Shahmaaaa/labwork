
t=int(input("Enter no of terms:"))
terms_lst=[]
for i in range(t):
        terms=int(input("Enter terms:"))
        terms_lst.append(terms)
powerfnctn=map(lambda x:3**x,terms_lst)
print("Powers of 2 are:")
power_fnctn_list=list(powerfnctn)
print(power_fnctn_list)
