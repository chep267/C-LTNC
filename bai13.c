#include <stdio.h>


int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("Danh sach So Fibonacci <= %d la: ", n);
    
    for (int i=1; i<=n; i++) {
        int a = Fibonacci(i);
        if(a <= n)
            printf("%d  ", a);
        else break;
    }
    return 0;
}
