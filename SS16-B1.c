#include<stdio.h>
//C:\\Users\Admin\Desktop
int main(){
	FILE *poiter;
	char text[100];
	printf("Nhap 1 chuoi ki tu bat ki: ");
	gets(text);
	poiter = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","w+");
	fwrite(text,sizeof(char),sizeof(text),poiter);
	printf("Noi dung van ban la %s ",text);
	fclose(poiter);
	return 0;

}
