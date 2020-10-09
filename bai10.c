#include <stdio.h>
#include <math.h>

int demchuso(int n) {
	if (n < 0) n = -n;
	int dem = 0;
	while (n != 0) {
		n = (n-n%10) / 10;
		dem ++;
	}
	return dem;
}
int isArmstrong(int n) {
	int d = demchuso(n);
    int m = n;
    int s = 0;
    while(m != 0) {
        s += pow(m%10,d);
        m = (m - m%10) / 10;
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
