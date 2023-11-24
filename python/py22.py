s=list(input("Enter the word:"))
al={}
for i in s:
    al[i]=al.get(i,0)+1
print(al)
