#include <stdio.h>
#include <math.h>

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
        s += giaithua(i) * pow(-1,i-1);
    }
    printf("Tong S la: %d",s);
    
    return 0;
}
