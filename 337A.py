n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
print(l,l[(n//2)-1],l[len(l)-(n//2)+1])
print(l[len(l)-(n//2)]-l[(n//2)-1])
