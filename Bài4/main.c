#include <stdio.h>

void indexMin(int arr[], int size){
    printf("Array elements are:\n");
    for (int i=1; i<=size; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    int min=arr[1];
    int vitri=1;
    for (int i=1; i<=size; i++) {
        if (min>arr[i]){
            min=arr[i];
            vitri = i;
        }
    }
    printf("Giá trị nhỏ nhất = %d\n", min);
    printf("Vị trí phần tử là arr[%d]\n", vitri);
}
int main(){
    int arr[11];
    indexMin(arr, 10);
    return 0;
}
