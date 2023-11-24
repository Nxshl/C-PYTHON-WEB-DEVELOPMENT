def rev(n):
    if len(n)==1:return n[0]
    else:return n[-1] + rev(n[:-1])
n=input("Enter the string:")
print("reverse of ",n,":",rev(n))
