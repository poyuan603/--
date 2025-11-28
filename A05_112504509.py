q=["Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"]
m=[0,31,28,31,30,31,30,31,31,30,31,30,31]
t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    x=0
    for i in range(1,a):
        x+=m[i]
    x+=b-1
    print(q[x%7])
