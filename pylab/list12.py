colorlist1=input("Enter colors for list1 separated by space : ")
colorlist2=input("Enter colors for list2 separated by space : ")
colorlist1=colorlist1.split()
colorlist2=colorlist2.split()
newlist=[color for color in colorlist1 if color not in colorlist2]
print(f"list of colors from list1 and not contained in list2 are : {newlist}")
