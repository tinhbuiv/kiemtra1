#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b;
    printf("Vui long nhap so nam kinh nghiem");
    scanf("%d", &a);
    printf("Vui long so nam lam viec cho cong ty");
    scanf("%d", &b);

    int luongchinhthuc = 0;
    float thuongthang13 = 0;
    if (a < 2) {
        printf("Luong chinh thuc trong 12 thang chinh la 10 trieu");
        luongchinhthuc = 10;
    } else if (a >= 2 && a <= 5) {
        printf("Luong chinh thuc trong 12 thang chinh la 20 trieu");
        luongchinhthuc = 20;
    } else {
        printf("\nLuong chinh thuc trong 12 thang chinh la 30 trieu\n");
        luongchinhthuc = 30;
    }
    if (b < 1) {
        thuongthang13 = luongchinhthuc * 0.3;
    } else if (b >= 1 & b <= 2) {
        thuongthang13 = luongchinhthuc * 0.5;
    } else if (b >= 2 && b <= 5) {
        thuongthang13 = luongchinhthuc;
    } else {
        thuongthang13 = luongchinhthuc * 2;
    }
    printf("\nluong thuong thang 13 cua ban la %f\n", thuongthang13);
    return 0;
}