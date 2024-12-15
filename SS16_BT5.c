#include <stdio.h>

void doiGiatri(int *arr, int value, int vitri){
    arr[vitri] = value;
}

int main() {
    int arr[] = {1, 7, 3, 5, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int vitri = 2;
    int value = 10;
    printf("Mang ban dau: \n");
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    doiGiatri(arr, value, vitri);
    printf("\nMang moi la:\n");
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
