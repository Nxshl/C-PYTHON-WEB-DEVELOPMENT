n=input("Enter the list elements seperated by comma:")
n=n.split(',')
dul=[]
new=[]
for i in n:
    if i not in new:
        new.append(i)
    else:
        dul.append(i)
print("After removing duplicate elements\n",new)
print('Duplicate elements are\n',dul)
