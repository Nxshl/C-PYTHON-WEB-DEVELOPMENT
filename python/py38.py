def count(n):
    j=0
    for i in n.split():
        if (len(i)>2 and i[0]==i[-1]):
            j+=1
    return j
n=input("Enter the string:")
print("count=",count(n))
