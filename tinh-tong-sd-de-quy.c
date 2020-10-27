#include <stdio.h>
#include <math.h>

float s1(int n) {
    if (n == 1) return 1;
    return ( float)1/n + s1(--n);
}

long s2(int n) {
    if (n == 1) return 1;
    return n*n + s2(--n);
}

long gt(int n) {
    if (n == 1) return 1;
    return n*gt(--n);
}

double s3(int x, int n) {
    if (n == 1) return (double) x;
    return pow(x,n)/gt(n) + s3(x, --n);
}

int main()
{
    int n, x;
    printf("Nhap n: "); scanf("%d", &n);
    printf("S1: %0.4f", s1(n));
    printf("S2: %ld", s2(n));
    scanf("%d", &x);
    printf("S3: %0.4f", s3(x,n));
    return 0;
}
