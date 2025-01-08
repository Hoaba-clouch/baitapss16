#include<stdio.h>
void arrangeArr(int *arr,int *n);
void printfArr(int *arr,int *n);
int main(){
	int array[]={4,5,7,3,56,7,1,0};
	int size=sizeof(array)/sizeof(int);
	printf("Mang truoc khi xap sep : \n");
	printfArr(array,&size);
	printf("Mang sau khi xap sep : \n");
	arrangeArr(array,&size);
	printfArr(array,&size);
	
}
void arrangeArr(int *arr,int *n){
	for(int i=0;i<*n;i++){
		int min=arr[i];
		for(int j=i;j<*n;j++){
			if(arr[j]<min){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
}
void printfArr(int *arr,int *n){
	for(int i=0;i<*n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}
