n = int(input("enter no. of elements:"))
print("enter elements:")
l = [int(input()) for i in range(n)]
d = []
c = []
for i in range(n):
    if l[i] not in d:
        d.append(l[i])
for i in range(len(d)):
    c.append(l.count(d[i]))
for i in range(len(d)):
    print('{0} has repeated {1} times'.format(d[i],c[i]))
