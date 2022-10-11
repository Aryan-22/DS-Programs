#include<stdio.h>
int ls(int arr[],int n,int target)
{
    int ans = -1;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == target)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
void main()
{
    int i,n,x,z;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[100];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to be deleted:");
    scanf("%d",&x);
    printf("New array:");
    z = ls(a,n,x);
    for(i = 0;i < n - 1;i++)
    {
        if(i >=z)
       {
           a[i] = a[i + 1];

       }
       else if(i == z)
       {

           continue;
       }
    }


    for(i = 0;i < n - 1;i++)
    {
        printf("%d ",a[i]);
    }
}
