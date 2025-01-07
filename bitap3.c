#include<stdio.h>
#include<stdlib.h>
int  sum(int *num1, int*num2,int *total){
	int sum = *num1 + *num2;
	return sum; 
}
int main(){
	int a=6,b=7;
	int tong = 0;
	printf( " tong cua hai so ban vuanhap vao la %d \n",sum(&a,&b,&tong));
	return 0; 
	
}
