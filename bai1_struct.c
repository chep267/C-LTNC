#include "stdio.h"
#include "string.h"

typedef struct thisinh {
	char ht[30];
	float T;
	float L;
	float H;
} ts;

void nhap(ts *a);
void in(ts a);
float tongdiem(ts a);
int main() 
{
	int n;
	printf("Nhap n: "); scanf("%d", &n); 
	ts ds[n];
	int i;
	for (i=0; i<n; i++) {
		printf("\nNhap thong tin thi sinh %d: ", i+1);
		nhap(&ds[i]);
	}
	
	printf("\nIn:\n");
	for (i=0; i<n; i++) {
		printf("\nThong tin thi sinh %d: ", i+1);
		in(ds[i]);
	}
	
	float dc;
	printf("\nNhap diem chuan: "); scanf("%f", &dc);
	printf("\nDS cac thi sinh trung tuyen la: ");
	for (i=0; i<n; i++) {
		if (tongdiem(ds[i]) >= dc)
			in(ds[i]);
	}
	
	return 0;
}

void nhap(ts *a) {
	fflush(stdin);
	printf("\n\tNhap ho ten: "); gets(&a->ht); //doc ca dong
	printf("\n\tNhap diem toan: "); scanf("%f", &a->T);
	printf("\n\tNhap diem ly: "); scanf("%f", &a->L);
	printf("\n\tNhap diem hoa: "); scanf("%f", &a->H);	
}

void in(ts a) {
	printf("\n\tHo ten: %s", a.ht);
	printf("\n\tDiem toan: %0.2f ", a.T);
	printf("\n\tDiem ly: %0.2f", a.L);
	printf("\n\tDiem hoa: %0.2f", a.H);
}

float tongdiem(ts a) {
	return a.T + a.L + a.H;
}
