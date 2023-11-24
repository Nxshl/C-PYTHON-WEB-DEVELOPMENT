def sum(l):
    if len(l)==1:return l[0]
    else:
        return l[0]+ sum(l[1:])
l=input("Enter the list:")
l=list(map(int,l.split()))
print("sum:",sum(l))
