#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void inputString(char *str,int *n);
void severseString(char *str,int *n);
int main(){
	char string[100];
	printf("Moi nhap vao chuoi: ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string,"\n")]='\0';
	int size=strlen(string);
	printf("Mang truoc khi dao nguoc: ");
	inputString(string,&size);
	printf("\nMang sau khi dao nguoc: ");
	severseString(string,&size);
}
void inputString(char *str,int *n){
	for(int i=0;i<*n;i++){
		printf("%c",*(str+i));
	}
}
void severseString(char *str,int *n){
	strrev(str);
	for(int i=0;i<*n;i++){
		printf("%c",*(str+i));
	}
}
