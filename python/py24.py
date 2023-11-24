n1=set(map(int,input('Enter collection-1:').split()))
n2=set(map(int,input('Enter collection-2:').split()))
print('a')
print('They are same length:',len(n1)==len(n2))
print('b')
print('they sum to same value:',sum(n1)==sum(n2))
print('c')
print('they have coomon value',n1&n2)
      
