#include <stdio.h>
#include <math.h>


int main()
{
    int n; 
    do {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
    }
    while(n<100 || n>999);
    int m = n;
    int s = 0;
    while(m != 0) {
        s += pow(m%10,3);
        m = (m - m%10)/10;
    }
    if (s == n) printf("%d la so Armstrong", n);
    else printf("%d khong phai la so Armstrong", n);
    return 0;
}
