#include<stdio.h>
void main()
{
    int a[100] , b[100],c[100],n , m;
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
    int k = 0;
    for(int i = 0;i < n;i ++)
    {
        int x = 0;
        for(int j = 0;j < m;j ++)
        {
            if(a[i] != b[j])
            {
                x += 1;
            }

        }
        if(x == m)
        {
            c[k] = a[i];
            k += 1;
        }

    }
    for(int i = 0;i < m;i ++)
    {
        int x = 0;
        for(int j = 0;j < n;j ++)
        {
            if(b[i] != a[j])
            {
                x += 1;
            }

        }
        if(x == n)
        {
            c[k] = b[i];
            k += 1;
        }

    }
    printf("symmetric difference of set A and set B = \n");
    for(int i = 0;i < k;i ++)
    {
        printf("%d ",c[i]);
    }

}
