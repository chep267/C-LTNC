#include <stdio.h>

int main()
{
    int n;
    printf("nhap so phan tu: ");
    scanf("%d", &n);
    int day[n];
    int dem1=0, dem2 =0;
    printf("Nhap day: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &day[i]);
    }
    printf("Day vua nhap la: ");
    for (int i=0; i<n; i++) {
        printf("%d  ", day[i]);
        if (day[i]<day[i+1]) dem1++;
        if (day[i]>day[i+1]) dem2++;
    }
    printf("\n");
    if (dem1 == n) printf("Day duoc sap xep tang dan");
    else if (dem2 == n) printf("Day duoc sap xep giam dan");
    else printf("Day khong duoc sap xep");
    return 0;
}
