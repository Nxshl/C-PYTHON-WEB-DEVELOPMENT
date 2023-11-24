def sum(n):
    if n==1:return 1
    else:return n + sum(n-1)
n=int(input("Enter the limit:"))
print("Sum of ",n,"numbers:",sum(n))
