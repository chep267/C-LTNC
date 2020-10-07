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
    do {
        printf("Nhap so tu nhien n: ");
        scanf("%d", &n);
    }while (n<0);
    
    printf("\nDanh sach so Armstrong <= %d la: ",n);
    for (int i=0; i<=n; i++) {
        if (isArmstrong(i)) printf("%d ", i);
    }
    
    return 0;
}
