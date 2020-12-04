#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *f;
	f = fopen("dayso.txt", "r");
	
	int n;
	fscanf(f, "%d ", &n);
	
	int *a = (int *) malloc (n * 4);
	
	int i, s = 1, dem =0;
	for(i=0; i<n; i++) {
		fscanf(f, "%d", a+i);
		printf("%d ", *(a+i));
		if (*(a+i) >= 10) {
			s *= *(a+i);
			dem ++;
		}
	}
	printf("\nTBN: %0.2f", (float)s/dem);
	fclose(f);
	return 0;
}
