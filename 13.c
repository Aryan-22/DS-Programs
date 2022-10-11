#include<stdio.h>
void main()
{
    int *a,arr[100],n,curr;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
        scanf("%d",&arr[i]);
    }
    a = arr;
    printf("%d",a);

}
