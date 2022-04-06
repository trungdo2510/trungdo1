#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hello()
{
	printf("Hello world\n");
}
//int main(){
//		hello();
//	return 0;
//}
void greeting(char name[150],int age){
//	printf("Nhap ten : \n");
	printf("Hello %s age %d\n",name,age);
}
int main(){
	hello();
	char myname[150];
	gets(myname);
//	greeting(myname);
int myage;
	fflush(stdin);
	scanf("%d",&myage);
	greeting(myname,myage);	
	return 0;
}

