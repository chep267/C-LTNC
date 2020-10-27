#include <stdio.h>


float median(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    
    if(n%2 == 0) {
        int t = n/2;
        return (float) (a[t-1] + a[t])/2;
    }
    else {
        int t = n/2;
        return a[t];
    }
}


int main()
{
    FILE *f;
    f = fopen("dayso.txt", "r"); 
    int n; 
    fscanf(f,"%d", &n);
    int a[n]; float s = 0;
    
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &a[i]);
        s += a[i];
    }
    printf("\nTBC: %0.2f", s/n);
    printf("\nTrung vi: %0.2f", median(a,n));
    fclose(f);
    return 0;
}
