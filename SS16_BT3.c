#include<stdio.h>

void sum(int *a, int *b, int *tong){
	*tong = *a + *b;
}
int main(){
	int a=5;
	int b=15;
	int tong;
	sum(&a,&b,&tong);
	printf("Tong 2 so nguyen la: %d",tong);
	return 0;
}
