#include<stdio.h>
void main()
{
    int a[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int i = 2, j =3 , x;
    printf("%d\n", a[0]);
    printf("%d\n", &a[2][3]);
    x = (i - 0)*(4 - 0 + 1)+(j - 0);
    printf("\n%d", x);
    printf("\n%u", a[0] + x);
}
