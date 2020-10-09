#include "stdio.h"

int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int Fibonacci2(int n)
{
    int a1 = 1;
    int a2 = 1;
    int a = 0;
    int i = 3;
    
    while (i <= n) {
    	a = a1+a2;
    	a1 = a2;
    	a2 = a;
    	i++;
	}
	return a;
}

int main()
{
    int n;
    do {
    	printf("nhap n: ");
    	scanf("%d", &n);
	} while (n<=0);
    
    printf("So Fibonacci thu %d la: %d", n, Fibonacci2(n));
    return 0;
}
