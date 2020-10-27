#include <stdio.h>


int timMax( int a[], int n) {
    int max = a[n-1];
    if(n == 1) return a[0];
    int t = timMax(a, n-1);
    return max > t ? max : t;
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Max day: %d", timMax(a, n));
}
