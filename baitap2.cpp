#include<stdio.h>
void swap(int *num1, int *num2 ){
	int temp = *num1;
	*num1 = *num2;
	*num2=temp;
	printf("so dau la %d  so hai la%d",*num1,*num2);
}
int main(){
	int a=2,b=5;
	swap(&a,&b);
	return 0;
}
