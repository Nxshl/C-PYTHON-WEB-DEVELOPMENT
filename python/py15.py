a=input("Enter numbers seperated by comma:")
a=list(map(int,a.split(',')))
p=[item for item in a if item%2==0]
print("List of even numbers=",p)
