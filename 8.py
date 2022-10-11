n = int(input("enter no. of elements in A:"))
print("enter elements:")
l = [int(input()) for i in range(n)]
m = int(input("enter no. of elements in B:"))
print("enter elements:")
x = [int(input()) for i in range(n)]
a = l + x
a.sort()
print(a)
