#include <stdio.h>

void hoanvi(float *a, float *b);



int main()
{
    float day[] = {1, 2, 10, 8, 4, 6, 2, 3};
    printf("Day ban dau: ");
    for(int i=0; i<8; i++) {
        printf("%0.1f ", day[i]);
    }
    
    for(int i=0; i<7; i++) {
        for(int j=i+1; j<8; j++) 
        {
            if(day[i]>day[j])
                hoanvi(&day[i], &day[j]);
        }
    }
    
    printf("\nDay sau khi sap xep: ");
    for(int i=0; i<8; i++) {
        printf("%0.1f ", day[i]);
    }
    return 0;
}

void hoanvi(float *a, float *b)
{
    float tg = *a;
    *a = *b;
    *b = tg;
}
