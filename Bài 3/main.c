#include <stdio.h>

void reverse(int arr[], int size) {
    int i;
    printf("Array elements are:\n");
    for (i=1; i<=size; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nKết quả hiển thị:\n");
    for (i=size; i>0; i--) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[5];
    reverse(arr, 5);
    return 0;
}

