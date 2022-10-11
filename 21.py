print("enter order of matrix:")
n ,m = map(int,input().split(" "))
print(n,m)
print("enter matrix:")
c = []
for i in range(n):
    a = list(map(int,input().split(" ")))
    c.append(a)
for i in range(n):
    for j in range(m):
        if i > j and i != j:
            c[i][j] , c[j][i] = c[j][i] , c[i][j]


print(c)


