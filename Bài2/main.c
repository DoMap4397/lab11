#include <stdio.h>

int check(int num) {
    if (num%50==0) {
        return 0;
    } else
        return 1;
}
int main(){
    printf("Nhập số lượng phần tử trong dãy: ");
    int soluong;
    scanf("%d", &soluong);
    int a[soluong+1];
    for (int i=1; i<=soluong; i++) {
        printf("Nhập a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("Các số là bội của 50:\n");
    for (int i=1; i<=soluong; i++) {
        if (check(a[i])==0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
