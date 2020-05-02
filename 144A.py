def swap(l,n):
    for i in range(n-1):
        if(a[i]<a[i+1]):
            a[i],a[i+1]=a[i+1],a[i]
n=int(input())
l=list(map(int,input().split()))
x=l
x.sort()
print(l)
x.reverse()
print(l)
count=0
while(x!=l):
    swap(l,n)
    count+=1
print(count)
    
