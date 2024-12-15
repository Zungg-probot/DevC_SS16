#include <stdio.h>

int main(){
    int num =10;
    int *ptr = &num;
    printf("Gia tri cua num: %d\n", num); 
    printf("Dia chi cua num: %d\n", &num);
    printf("Dia chi cua ptr: %d\n", ptr);
    printf("Gia tri ma ptr tro den: %d\n", *ptr);
    return 0;
}
