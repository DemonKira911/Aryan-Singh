x = int(input("Enter the size of list"))
y = int(input("Enter the size of sublist"))
list1 =[x]
sublist =[y]
for i in range(x):
 for j in range(y):
    sublist.append(input())
list1.append(sublist)
sublist=[]
print(list1)