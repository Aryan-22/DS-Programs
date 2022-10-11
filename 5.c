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
    int i,l,u,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[100];
    printf("enter range of your array:");
    scanf("%d %d",&l,&u);
    printf("Enter array elements sorted():\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i = l ;i <= u;i ++)
    {
        int f = 0;
        for(int j = 0;j < n;j ++)
        {
            if(i != a[j])
            {
                f += 1;
            }
        }
        if(f == n)
        {
            printf("%d ",i);
        }
    }

}
