#include <stdio.h>

void chunhat() {
    int a, b, chon, kt=0;
    while (kt==0) {
        printf("Nhập chiều dài= ");
        scanf("%d", &a);
        printf("Nhập chiều rộng= ");
        scanf("%d", &b);
        printf("Chọn:\t");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                printf("Diện tích hình chữ nhật trên= %d cm\n", a*b);
                break;
            case 2:
                printf("Chu vi hình chữ nhật trên= %d cm\n", a+b);
                break;
            default:
                break;
        }
        printf("\n");
    }
}
int main(){
    chunhat();
}
