#include<stdio.h>
void main(){
    int n,i,m;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    m=a[0];
    for(i=0;i<n;i++) {
       if(m < a[i]) {
           m = a[i]; } }
    printf("max value is:%d\n",m);
    int c[m+1]={0};
    for(i=0;i<n;i++)
        c[a[i]]++;
    for(i = 0;i <= m;i++)
        {
         if(c[i] == 1)
         printf("%d is not repeated\n",i);
         if(c[i] > 1)
         printf("%d is repeated %d times\n",i,c[i]);
        }
    }
