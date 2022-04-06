#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age,i;
	char name[150];
	 printf("Enter your name : ");
	 gets(name);
	 
	 printf("Enter your age : ");
	 scanf("%d",&age);
	 
	 for(i=1;i<=age;i+=1) {
	 	printf("\t\t\nHola %s",name);
	 }
	return 0;
}
