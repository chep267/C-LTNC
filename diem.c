#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void read (FILE *f, int n, int *x, int *y);
int tinh (int y);

int main() {
	FILE *f; int n; int *x; int *y;
	f = fopen("daydiem.txt", "r");
	fscanf(f, "%d", &n);

	x = (int *) malloc (n*sizeof(int));
	y = (int *) malloc (n*sizeof(int));
	read (f, n, x, y);
	int i, max = 0, s=0;
	for (i=0; i<n; i++) {
		printf("%d %d , ", *(x+i), *(y+i));
		int t = tinh(*(y+i));
		s += t;
		if(t > max) max = t;
	}
	
	printf("\nTong s= %d", s);
	printf("\nMax = %d", max);
	fclose(f);
	return 0;
}

void read (FILE *f, int n, int *x, int *y) {
	f = fopen("daydiem.txt", "r");
	int i;
	fscanf(f, "%d", &i);
	for (i=0; i<n; i++) {
		fscanf(f, "%d%d", (x+i), (y+i));
	}
	fclose(f);
}

int tinh (int y) {
	return abs(y);
}
