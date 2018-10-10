#include <stdio.h>
#include <stdlib.h>


int main() {
    int kinhnghiem;
    printf("Nhap vao so nam kinh nghiem :\n");
    scanf("%d", &kinhnghiem);
    int sonamlamviec;
    printf("Nhap vao so nam lam viec tai cong ty\n");
    scanf("%d", &sonamlamviec);
    //Cac truong hop voi so nam kinh nghiem < 2
    if (kinhnghiem < 2 && sonamlamviec < 1) {
        printf("Luong thuong thang 13 cua ban la 3 trieu VND ");
        return 0;

    } else if (kinhnghiem < 2 && 1 <= sonamlamviec < 2) {
        printf("Luong thuong thang 13 cua ban la 5 trieu VND ");
        return 0;
    } else if (kinhnghiem < 2 && 2 <= sonamlamviec <= 5) {
        printf("Luong thuong thang 13 cua ban la 10 trieu VND ");
        return 0;
    } else if (kinhnghiem < 2 && 5 < sonamlamviec) {
        printf("Luong thuong thang 13 cua ban la 20 trieu VND ");
        return 0;
    }
// cac truong hop voi so nam kinh nghiem tu 2 den 5 nam
    if (2 <= kinhnghiem <= 5 && sonamlamviec < 1) {
        printf("Luong thuong thang 13 cua ban la 6 trieu VND ");
        return 0;

    } else if (2 <= kinhnghiem <= 5 && 1 <= sonamlamviec < 2) {
        printf("Luong thuong thang 13 cua ban la 10 trieu VND ");
        return 0;
    } else if (2 <= kinhnghiem <= 5 && 2 <= sonamlamviec <= 5) {
        printf("Luong thuong thang 13 cua ban la 20 trieu VND ");
        return 0;
    } else if (2 <= kinhnghiem <= 5 && 5 < sonamlamviec) {
        printf("Luong thuong thang 13 cua ban la 40 trieu VND ");
        return 0;
    }
//cac truong hop voi so nam kinh nghiem tren 5 nam
    if (5 < kinhnghiem && sonamlamviec < 1) {
        printf("Luong thuong thang 13 cua ban la 9 trieu VND ");
        return 0;

    } else if (5 < kinhnghiem && 1 <= sonamlamviec < 2) {
        printf("Luong thuong thang 13 cua ban la 15 trieu VND ");
        return 0;
    } else if (5 < kinhnghiem && 2 <= sonamlamviec <= 5) {
        printf("Luong thuong thang 13 cua ban la 30 trieu VND ");
        return 0;
    } else if (5 < kinhnghiem && 5 < sonamlamviec) {
        printf("Luong thuong thang 13 cua ban la 60 trieu VND ");
        return 0;
    }
}



//    if (kinhnghiem < 2 && 1 <= sonamlamviec < 2) {
//        printf("Luong thuong thang 13 cua ban la 5 trieu VND");
//    }
//    if( 2 <= kinhnghiem <= 5 && 2 <= sonamlamviec <= 5)
//    {
//        printf("Luong thuong thang 13 cua ban la 20 trieu VND");
//    }
//    if(kinhnghiem > 5 && sonamlamviec > 5)
//    {
//        printf("Luong thuong thang 13 cua ban la 60 trieu");
//    }
//    if (kinhnghiem < 2) {
//        switch (sonamlamviec) {
//            case 1:
//                printf("Luong thang 13 cua ban la 3tr");
//                break;
//            case 2:
//        }
//    }
