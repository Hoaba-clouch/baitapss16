#include<stdio.h>
int main(){
	int a=100;
	int *ptr;
	ptr = &a;
	printf( " gia tri cua bien a la %d\n",a);
	printf( " dia chi cua bien a la %d\n",&a);
	printf( " gia tri cua bien a duoc bieu dien theo con tro la %d\n",ptr);
	printf( " dia chi cua bien a duoc bieu dien theo con tro la %d\n",*ptr);
	
}
