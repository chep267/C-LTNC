#include <stdio.h>

int tinhBT(int n) {
    if(n==0 || n==1) return 1;
    
    int s = 0;
    for (int i=n; i>0; i--) {
        s += i*tinhBT(i-1);
    }
    return s;
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    
    printf("\nBT: %d", tinhBT(n));
    
}
