s=input("Enter the string:")
if(s.endswith('ing')):
    s+='ly'
else:
    s+='ing'
print(s)
