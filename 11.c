#include<stdio.h>
void main()
{
    int a[30] , b[30],c[30],n , m;
    printf("enter no. of elements in set A:");
    scanf("%d",&n);
    printf("enter no. of elements in set B:");
    scanf("%d",&m);
    printf("enter elements of set A:");
    for(int i = 0;i < n;i ++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of set B:");
     for(int i = 0;i < m;i ++)
    {
        scanf("%d",&b[i]);
    }
    int x = 0;
    for(int i = 0;i < n;i ++)
    {
        int k = 0;
        for(int j = 0 ; j < m;j ++)
        {
            if (a[i] != b[j])
            {
                k += 1;
            }
            else
            {
                break;
            }

        }
        if (k == m)
        {
            c[x] = a[i];
            x += 1;
        }
    }
    printf("difference of set A and set B = \n");
    for(int i = 0;i < x;i ++)
    {
        printf("%d ",c[i]);
    }

}
