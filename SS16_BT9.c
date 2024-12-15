#include <stdio.h>

void themPhantu(int *arr, int *size, int value, int vitri) {
    for(int i=*size;i > vitri;i--){
        arr[i] = arr[i - 1];
    }
    arr[vitri]=value;
    (*size)++;
}
int main(){
    int arr[100]={2, 5, 7, 4, 9};
    int size = 5;
    int value = 3;
    int vitri = 2;
    printf("MMang ban dau: \n");
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
    themPhantu(arr,&size,value,vitri);
    printf("\nMang moi: \n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
