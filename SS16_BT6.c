#include <stdio.h>

int timPhantu(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return 0;
}
int main() {
    int arr[] = {2, 8, 3, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    if(timPhantu(arr, size, value)){
        printf("Phan tu %d co trong mang\n",value);
    }else{
        printf("Khong tim thay trong mang\n");
    }
    return 0;
}
