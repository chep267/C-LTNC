#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
    swap(&arr[left], &arr[high]);
    return left;
}
 
/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);
 
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int timMax( int a[], int n) {
    int max = a[n-1];
    if(n == 1) return a[0];
    int t = timMax(a, n-1);
    return max > t ? max : t;
}


int tongbp(int a[], int n) {
    if (n == 0) return 0;
    int t = a[n-1] < 0 ? a[n-1]*a[n-1] : 0;
    return t + tongbp(a, n-1);
}



int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Max day: %d", timMax(a, n));
    printf("\nTong bp cac ptu am : %d", tongbp(a, n));
    
    quickSort(a, 0, n);
    printf("\nDay sau khi sort: ")
    for (int i =0; i<n; i++) {
        printf("%d  ", a[i]);
    }
}
