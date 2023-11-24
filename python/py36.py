def rev(a):
    a=list(a.split())
    for i in a[::-1]:
        print(i,end=" ")
n=input("Enter the name:")
rev(n)
