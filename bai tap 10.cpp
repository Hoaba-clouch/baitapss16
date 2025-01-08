#include<stdio.h>
void deleteArr(int *arr,int deleteIndex,int *n);
void printfArr(int *arr,int *n);
int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(array)/sizeof(int);
	printf("Mang truoc khi xoa la: \n");
	printfArr(array,&size);
	int index;
	printf("Moi nhap vao vi tri can xoa: ");
	scanf("%d",&index);
	deleteArr(array,index,&size);
	printfArr(array,&size);
	return 0;
}
void deleteArr(int *arr,int deleteIndex,int *n){
	if(deleteIndex<0||deleteIndex>=*n){
		printf("Vi tri xoa khong ton tai trong mang!!!!!\n");
	}
	else{
		for(int i = deleteIndex;i<*n;i++){
			*(arr+i)=*(arr+i+1);
		}
		--*n;
	}
}
void printfArr(int *arr,int *n){
	for(int i=0;i<*n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}
