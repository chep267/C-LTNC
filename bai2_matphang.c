#include "stdio.h"
#include "stdlib.h"
#include "math.h"
double kc(float x1, float y1, float x2, float y2) 
{
	return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
int main()
{
	FILE *f;
	f = fopen("matphang.txt", "r");
	
	
	int n;
	fscanf(f, "%d ", &n);
	
	float *x = (float *) malloc (n * sizeof(float));
	float *y = (float *) malloc (n * sizeof(float));
	
	int i; double s = 0;
	for(i=0; i<n; i++) {
		fscanf(f, "%f", x+i);
		fscanf(f, "%f", y+i);
	}
	
	for (i=0; i<n-1;i++) {
		s += kc(*(x+i),*(y+i), *(x+i+1), *(y+i+1));
	}
	printf("\nS= %0.2f",(float) s);
	fclose(f);
	return 0;
}
