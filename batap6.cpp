#include<stdio.h>
void searchCharacter(int *arr,int searchValue,int n);
void printfArr(int *arr,int n);
int main(){
	int x;
	int array[]={4,6,3,6,7,2,100};
	int size=sizeof(array)/sizeof(int);
	printfArr(array,size);
	printf("Moi nhap vao gia tri can tim trong mang : ");
	scanf("%d",&x);
	searchCharacter(array,x,size);
	
	
}
void searchCharacter(int *arr,int searchValue,int n){
	int flap=0, index;
	for(int i=0;i<n;i++){
		if(arr[i]==searchValue){
			flap=1;
			index=i;
			break;
		}
	}
	if(flap==1){
		printf("Gia tri %d nam o vi tri thu %d trong mang!!!!",searchValue,index);
	}
	else{
		printf("Gia tri can tim khong ton tai trong mang!!!!\n");
	}
}
void printfArr(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("array[%d] = %d\n",i,*(arr+i));
	}
}
