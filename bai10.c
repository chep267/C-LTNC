#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int m = n;
    int s = 0;
    while(m != 0) {
        s += pow(m%10,3);
        m = (m - m%10)/10;
    }
    if (s == n) return 1;
    else return 0;
}


int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (isArmstrong(n)) printf("%d la so Armstrong", n);
    else printf("%d khong phai la so Armstrong", n);
    return 0;
}
