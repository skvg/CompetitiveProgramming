for __ in range(int(input())):
    n,k=map(int,input().split())
    key=k*k
    flag=n%key
    if(flag==0):
        print("NO")
    else:
        print("YES")