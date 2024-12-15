#include <stdio.h>

void xoaPhantu(int *arr, int *size, int vitri){
    for(int i=vitri;i < *size -1;i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main(){
    int arr[100]={2, 5, 7, 4, 9};
    int size = 5;
    int vitri = 2;
    printf("MMang ban dau: \n");
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
    xoaPhantu(arr,&size,vitri);
    printf("\nMang moi: \n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
