#include "stdio.h"
#include "string.h"



struct NgaySinh {
	int day;
	int month;
	int year;
};

typedef struct NhanVien {
	char ht[50];
	struct NgaySinh ns;
	float sar;
} nv;

void nhap(FILE *f, nv *a);
void in(nv a);
void inDS_SX(nv a[], int n);

int main() 
{
	FILE *f;
	char tep[20];
	printf("Nhap ten tep: "); gets(tep);
	
	f = fopen(tep, "r");
	int n; fscanf(f,"%d\n", &n); 
	nv ds[n];
	
	int i;
	for (i=0; i<n; i++) {
		nhap(f, &ds[i]);
	}
	
	printf("\nIn:");
	for (i=0; i<n; i++) {
		in(ds[i]);
		printf("\n");
	}
	
	
	float s = 0, s2=0; int dem =0;
	float max = ds[0].sar, min = max;
	int vt1 = 0, vt2 = 0;
	for (i=0; i<n; i++) {
		s += ds[i].sar;
		if (ds[i].ns.year > 1990) {
			dem++;
			s2 += ds[i].sar;
		}
		if (ds[i].sar > max) {
			max = ds[i].sar;
			vt1 = i;
		}
		if (ds[i].sar < min) {
			min = ds[i].sar;
			vt2 = i;
		}
	}
	printf("\nLuong TB cua cong ty la: %0.2f", (float) s/n);
	printf("\nLuong TB cua nv duoi 30 tuoi la: %0.2f", (float)s2/dem);
	printf("\nNV co luong cao nhat la: "); in(ds[vt1]);
	printf("\nNV co luong thap nhat la: "); in(ds[vt2]);
	printf("\nDS sap xep theo luong la: ");
	inDS_SX(ds, n);
	return 0;
}

void nhap(FILE *f, nv *a) {
	fgets(&a->ht, 50, f); //doc ca dong
	fscanf(f, "%d", &a->ns.day);
	fscanf(f, "%d", &a->ns.month);
	fscanf(f, "%d", &a->ns.year);
	fscanf(f, "%f\n", &a->sar);	//khu "enter" xuong dong de nhap chuoi thu 2
}

void nhapN(File *f, nv *a, int n) {
	int i;
	for (i = 0, i<n; i++) {
		nhap(f, a+i);
	}
}

void in(nv a) {
	printf("\n\tHo ten: %s", a.ht);
	printf("\tNgay sinh: %d/%d/%d ", a.ns.day, a.ns.month, a.ns.year);
	printf("\n\tLuong: %0.2f", a.sar);
}

void inDS_SX(nv a[], int n) {
	int i,j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i].sar < a[j].sar) {
				nv b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	for (i=0; i<n; i++) {
		printf("\nThong tin nhan vien %d: ", i+1);
		in(a[i]);
	}
}

