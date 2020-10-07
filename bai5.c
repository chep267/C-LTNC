#include <stdio.h>

int main()
{
    int d, n ,g; 
    for (d=1; d<20; d++) {
        for (n=1; n<33; n++) {
            g = 100 - d - n;
            if (15*d + 9*n + g == 300) {
                printf("So trau dung la: %d", d);
                printf("\nSo trau nam la: %d", n);
                printf("\nSo trau gia la: %d", g);
                printf("\n---------------\n");
            }
        }
    }
    
    return 0;
}
