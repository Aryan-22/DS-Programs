global s
def submat(l,n,m):
    c = []
    d = []
    for i in range(len(l)):
        if n != i:
            c.append(l[i])
    for i in range(len(c)):
        d.append([])
    for i in range(len(c)):
        for j in range(len(l)):
            if j != m:
                d[i].append(c[i][j])
    return d

def det(l,n):
    s = 0
    if n == 1:
        return l[0]
    if n == 2:
        return l[0][0] * l[1][1] - l[0][1] * l[1][0]
    for j in range(n):
        s += (l[0][j]) * ((-1) ** j) * det(submat(l,0,j),n - 1)
    return s

n = int(input("enter dimension of matrix:"))
print("enter matrix:")
c = []
for i in range(n):
    a = list(map(int,input().split(" ")))
    c.append(a)

print(det(c,n))





