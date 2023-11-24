def digits_even(num):
    flag=0
    while num>0:
        d=num%10
        if not d%2:
            flag=1
            break
        num=num//10
    if(flag==1):return 1
    else:return 0


def perfect_square(num):
    flag=0
    for i in range(1,num//2):
        if i*i==num:
            flag=1
    if(flag==1):return 1
    else:return 0
    
    

lower=int(input('Enter lower limit\n'))
upper=int(input('Enter upper limit\n'))
for i in range(lower,upper+1):
    if digits_even(i) and perfect_square(i):
        print('k')
        print(i)
