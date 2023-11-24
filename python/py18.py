s=input("Enter the words:").split()
l=list(s)
n=int(input("Enter the number:"))
for i in s:
    if(len(i)>n):
        print(i)
