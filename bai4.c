#include <stdio.h>
#include <math.h>



int main()
{
    int s, c;
    int dx, dy;
    printf("Nhap tong so con: ");
    scanf("%d", &s);
    printf("Nhap tong so chan: ");
    scanf("%d", &c);
    
    dx = s*4 - c;
    dy = c - s*2;
    
    
    printf("So con ga la: %d", dx / 2);
    printf("\nSo con cho la: %d", s - dx/2);
    return 0;
}
