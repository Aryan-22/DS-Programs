#include<stdio.h>
void main() {
    printf("ARYAN TARAFDAR\n");
    int m, n, p, q, i, j, k;
    int a[100][100], b[100][100], c[100][100];
    printf("Enter the order of first matrix\n");
    scanf("%d%d", & m, & n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", & p, & q);
    if (m != p || n!= q) {
        printf("Matrix addition is not possible!\n");
    } else {
        printf("Enter the elements of Matrix A:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", & a[i][j]);
            }
        }
        printf("Enter the elements of Matrix B:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", & b[i][j]);
            }
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                c[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("The sum of the two matrices is:-\n");

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

}
