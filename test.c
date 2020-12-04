#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
	int n; FILE *f;
	f = fopen("test.txt", "r");
	fscanf(f,"%d", &n);
	
	//c1:
	int a[n], i, dem=0;
	for (i=0; i<n; i++) {
		fscanf(f, "%d", &a[i]);
	}
//	//c2:
//	float *a;
//	a = (float*) malloc (m*n*sizeof(float));

	for (i=1; i<n-1; i++) {
		if(abs(a[i]- a[i-1]) == (a[i+1] - a[i])) {
			dem ++;
		}
	}
	printf("so bo 3: %d", dem);
	return 0;
}
