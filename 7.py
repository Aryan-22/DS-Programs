n = int(input("enter no. of elements:"))
print("enter elements:")
l = [int(input()) for i in range(n)]
for i in range(n):

    if n & 1:
        l[i], l[n - i - 1] = l[n - i - 1], l[i]
        if i == n // 2:
            break
    else:
        l[i], l[n - i - 1] = l[n - i - 1], l[i]
        if i == (n // 2) - 1:
            break
print(l)