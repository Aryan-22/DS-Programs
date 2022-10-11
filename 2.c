#include<stdio.h>
void main()
{
    int i,n,x,p;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[100];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position:");
    scanf("%d",&p);
    printf("Enter element to be inserted:");
    scanf("%d",&x);
    for(i=n-1;i>=p-1;i--)
    {
       a[i+1]=a[i];
    }
    a[p-1]=x;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}
