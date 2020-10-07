int isArmstrong(int n) {
    int m = n;
    int s = 0;
    while(m != 0) {
        s += pow(m%10,3);
        m = (m - m%10)/10;
    }
    if (s == n) return 1;
    else return 0;
}


int main()
{
    printf("Danh sach so Armstrong co 3 chu so la: ");
    for (int i=100; i<1000; i++) {
        if (isArmstrong(i))
            printf("%d  ",i);
    }
    return 0;
}
