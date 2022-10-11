#include<stdio.h>
void main()
{
    int a[30] , b[30],c[30],n , m,min,max;
    printf("enter no. of elements in set A(greater no. of elements):");
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
    for(int i = 0;i < n;i ++)
    {
        c[i] = a[i];
    }
    int x =0;
    for(int i = 0;i < m;i ++)
    {
        int k = 0;
        int flag = 0;
        for(int j = 0;j < n;j ++)
        {
            if (b[i] == a[j])
            {
                continue;
            }
            else
            {
                flag += 1;
            }
        }
        if (flag == n)
        {
            c[n + x] = b[i];
            x += 1;
        }
    }
    printf("union of the set A and set B  = \n");
    for(int i = 0 ; i < n + x; i ++)
    {
        printf("%d ",c[i]);
   }
}
///ARYAN TARAFDAR
