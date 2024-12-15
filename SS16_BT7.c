#include <stdio.h>

void sapxepMang(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j=0;j < size - i - 1; j++){
            if(arr[j]>arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Mang truoc khi sap xep: \n");
    for(int i=0;i < size; i++){
        printf("%d ", arr[i]);
    }
    sapxepMang(arr, size);
    printf("\nMang sau kh isap xep: \n");
    for(int i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
