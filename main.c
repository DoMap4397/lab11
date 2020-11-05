#include <stdio.h>

void menu(){
    int a=0,b=0,kt=1;
    while (kt==1) {
        printf("\nTÍNH TOÁN\n");
        printf("=========================\n");
        printf("1. Nhập số\n");
        printf("2. Tính Tổng\n");
        printf("3. Tính Hiệu\n");
        printf("4. Tính Tích\n");
        printf("5. Tính Thương\n");
        printf("6. Thoát\n");
        printf("==========================\n");
        printf("Chọn:\t");
        int bien;
        scanf("%d", &bien);
        if (bien==1) {
            printf("Nhập giá trị a= ");
            scanf("%d", &a);
            printf("Nhập giá trị b= ");
            scanf("%d", &b);
        }
        if (bien==2) {
            printf("Tổng= %d\n", a+b);
        }
        if (bien==3) {
            printf("Hiệu= %d\n", a-b);
        }
        if (bien==4) {
            printf("Tichs= %d\n", a*b);
        }
        if (bien==5) {
            if (b==0) {
                printf("Lỗi");
            }
            else
                printf("Thương= %lf\n", (double)a/b);
        }
        if (bien==6) {
            printf("Kết Thúc\n");
            kt=0;
        }
    }
}
int main(){
    menu();
}
