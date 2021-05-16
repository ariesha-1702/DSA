from itertools import product
s=input()
lis=[]
lis1=[]
for i in range(10):
    if(s[i]=='o'):
        lis.append(i)
        lis1.append(i)
    if(s[i]=='?'):
        lis1.append(i)        
l=list(product(lis1,repeat=4)) 
t=lis[:]
if(len(lis)>4):
    print("0")              
else:
    c=0
    for i in l:
        lis=t[:]
        for j in i:
            if(j in lis):
                lis.remove(j)           
        if(len(lis)==0):
            c+=1
    print(c)                    
        
 