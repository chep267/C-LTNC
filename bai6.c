#include <stdio.h>

int main()
{
    int n; 
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    int s = 0;
    while(n != 0) {
        s += n%10;
        n = (n - n%10)/10;
    }
    
    printf("Tong cac chu so la: %d", s);
    return 0;
}
