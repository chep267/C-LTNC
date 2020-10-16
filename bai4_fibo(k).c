#include <stdio.h>

int fibo(int k);


int main()
{
    int n, s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        s += fibo(i);
    }
    printf("tong %d so fibonaci dau tien la: %d", n, s);
    return 0;
}

int fibo(int k)
{
    if(k == 1 || k == 2) return 1;
    int a1 = 1, a2 = 1, a;
    int i = 3;
    while (i <= k) {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
