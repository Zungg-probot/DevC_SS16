#include <stdio.h>

void inMang(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Phan tu %d: %d\n",i,*(arr + i));
    }
}
int main(){
    int arr[]={1, 2, 3, 8, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    inMang(arr, size);
    return 0;
}
