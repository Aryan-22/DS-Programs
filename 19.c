#include<stdio.h>
int main()
{
    int a[100][100],b[100][100];int i ,j,n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements of a");
    for(i = 0;i<n;i++)              //input array a
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);           //making transpose
    for(i=0;i<n;i++)
    for(j= 0;j<n;j++)
    b[j][i]= a[i][j];
    printf("transpose is :\n");
     for(i=0;i<n;i++)
    {for(j= 0;j<n;j++)
    printf("%d",b[i][j]);
    printf("\n");}
return 0;
}
