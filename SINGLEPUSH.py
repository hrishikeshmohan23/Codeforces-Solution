t=int(input())
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
for i in range(t):
    a=[]
    b=[]
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    for j in range(len(a)):
        c[j]=b[j]-a[j]
    s=set(c)
    for j in s:
        if(s.size()>1 and j!=0):
            k=j
    if(s.size()<=2 and k>0):
        print("YES")
    else:
        print("NO")
            
    
    
