def ev(n):
    for i in n:
        if i==239:break
        elif not i%2:print(i)

n=input("Enter the list")
n=list(map(int,n.split()))
ev(n)
        
