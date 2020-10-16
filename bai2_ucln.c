#include <stdio.h>

int ucln(int a, int b);



int main()
{
    int day[] = {12, 4, 20, 8, 24, 2};
    int uc = 999999;
    int n = sizeof(day)/sizeof(day[0]);
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++)
        {
            int tg = ucln(day[i],day[j]);
            if(uc > tg) uc = tg;
        }
        
    }
    printf("UCLN: %d", uc);
    
    return 0;
}

int ucln(int a, int b)
{
    while (a != b) {
        if (a > b) a -= b;
        else (b -= a);
    }
    return a;
}
