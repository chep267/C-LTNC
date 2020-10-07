#include <stdio.h>
#include <math.h>

int giaithua(int a) {
    int s = 1;
    for (int i=1; i<=a; i++) {
        s *= i;
    }
    return s;
}

int tinh(int x, int i) {
    int s;
    s = pow(-1,i) * pow(x,2*i+1) / giaithua(2*i+1);
    return s;
}

int main()
{
    int s = 0, n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    
    for (int i = 0; i<=n; i++) {
        s += tinh(x,i);
    }
    printf("Tong S la: %d", s);
    
    return 0;
}
