n=input("Enter the sentence:").split()
v=['a','e','i','o','u','A','E','I','O','U']
s=0
for i in n:
    for j in i:
        if j in v:
            s+=1
print('Total no of vowels:',s)
