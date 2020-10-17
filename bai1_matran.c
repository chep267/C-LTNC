#include <stdio.h>

void nhap (int *a, int m, int n);
void xuat (int *a, int m, int n);
int tong (int *a, int m, int n);
int main()
{
    printf("nhap m,n: ");
    int m,n;
    scanf("%d%d", &m,&n);
    int a[m][n];
    nhap( (int *)a, m, n);
    xuat( (int *)a, m, n);
    printf("Tong cac ptu la: %d", tong( (int *)a, m, n));
    return 0;
}

void nhap (int *a, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i+1, j+1);
            scanf("%d", a+i*n+j);
        }
    }
}

void xuat (int *a, int m, int n) {
    printf("\n----------------\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) printf("| %d | ", *(a+i*n+j));
            else printf("%d | ", *(a+i*n+j));
        }
        printf("\n----------------\n");
    }
}

int tong (int *a, int m, int n) {
    int s = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            s += *(a+i*n+j);
        }
    }
    return s;
}
