#include<stdio.h>
void printfArr(int *arr,int *n);
void editArr(int *arr,int *value,int *index);
int main(){
	int newValue,newIndex;
	int array[]={45,6,3,7,8,4,57};
	int size=sizeof(array)/sizeof(int);
	printf("Mang truoc khi sua: \n");
	printfArr(array,&size);
	printf("Moi nhap vao gia tri moi : ");
	scanf("%d",&newValue);
	printf("Moi nhap vao vi tri can cap nhat : ");
	scanf("%d",&newIndex);
	if(newIndex>=0&&newIndex<size){
		printf("Mang sau khi sua: \n");
		editArr(array,&newValue,&newIndex);
		printfArr(array,&size);
	}
	else{
		printf("vi tri cap nhat khong ton tai trong mang!!!!!\n");
	}

	return 0;
	
}
void printfArr(int *arr,int *n){
	for(int i=0;i<*n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}
void editArr(int *arr,int *value,int *index){
	arr[*index]=*value;
}
