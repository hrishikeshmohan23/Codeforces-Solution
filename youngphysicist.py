n=int(input())
s=0
x=[]
y=[]
z=[]
sumx=0
sumy=0
sumz=0
for i in range(n):
    vector=list(map(int,input().split()))
    x.append(vector[0])
    y.append(vector[1])
    z.append(vector[2])
for i in range(n):
    sumx+=x[i]
    sumy+=y[i]
    sumz+=z[i]
if sumx==0 and sumy==0 and sumz==0:
    print("YES")
else:
    print("NO")
