#include <stdio.h>

int giaithua(int a) {
    int s = 1;
    for (int i=1; i<=a; i++) {
        s *= i;
    }
    return s;
}

int main()
{
    int n, s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        s += giaithua(i);
    }
    printf("Tong cac giai thua tu 1 den %d la: %d", n,s);
    
    return 0;
}
