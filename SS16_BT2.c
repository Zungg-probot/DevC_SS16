#include<stdio.h>

void doiCho(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x =10;
	int y = 15;
	printf("So x truoc khi doi cho: %d\n",x);
	printf("So y truoc khi doi cho: %d\n",y);
	doiCho(&x,&y);
	printf("So x sau khi doi cho: %d\n",x);
	printf("So y sau khi doi cho: %d",y);
	return 0;
}

