n=input('Enter the names sperated by comma:')
s=list(n.split(','))
c=0
for i in s:
    if(i[0]=='a' or i[0]=='A'):
        c+=1
print('No.of names starts with "A" :',c)
