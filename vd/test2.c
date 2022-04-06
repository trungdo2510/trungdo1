#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	char sex,name[150];
	
	printf("Enter name is: ",name);
	gets(name);
	
	printf("Enter your sex (M/F) : ",sex);
	scanf("%c",&sex);
	fflush(stdin);
	
	printf("Enter age is : ",age);
	scanf("%d",&age);
//	fflush(stdin);
	
	if(sex == 'M')
		printf("\n Sr, is not ok");
	else if (age < 18)
		printf("\n Sr, is not ok");
	else if (age > 20)
		printf("\n Sr, is not ok");
	else if (age >= 18 && age <=20)
		printf("\n Hello, i like you");
	else
	return 0;
}
