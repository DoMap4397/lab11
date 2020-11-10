#include <stdio.h>
#include <math.h>

void GetRear() {
    int a, b, c, p;
    float S;
    printf("Nhập lần lượt giá trị 3 cạnh của tam giác:\n");
    scanf("%d%d%d", &a, &b, &c);
    p=(a+b+c)/2;
    if (a+b>=c && a+c>=b) {
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Diện tích của tam giác trên= %f", S);
    } else
        printf("Lỗi");
}

int main(){
    GetRear();
    printf("\n");
}
