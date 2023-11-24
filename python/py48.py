n=input("Enter the elements")
n=list(map(int,n.split()))
m=0
for i in n:
    if i>100:
      n[m]="over"
    m+=1
print("list:",n)
