#include <stdio.h>

int tinhBT(int n)
{
    if (n < 0) return 0;
    else if (n == 0 || n == 1) return 1;
    // else if (n == 2) return 5;
    // else if (n == 3) return 18;
    else {
        int s = 0;
        for (int i = 1; i <= n; i++) {
            s += i*i*tinhBT(n-i);
        }
        return s;
    }
}


int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("gia tri bt la: %d", tinhBT(n));

    return 0;
}
