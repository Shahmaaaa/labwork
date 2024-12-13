n=int(input("enter number of integers to input:"))
list1=[]
for i in range(n):
    num1=int(input("enter integers:"))
    list1.append(num1)
n=int(input("enter numbers of integers to input:"))
list2=[]
for i in range(n):
    num2=int(input("enter integers:"))
    list2.append(num2)
if len(list1)==len(list2):
    print("lists are of same length")
else:
    print("lists are of different length")
if sum(list1)==sum(list2):
    print("both have same sum value")
else:
    print("different sum value")
common=set(list1)&set(list2)
if common:
    print(f"common value in both lists are :{common}")
else:
    print("not have common value")

