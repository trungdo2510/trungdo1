#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age,i;
	char gender,name[150];
	printf("Enter name : ");
	gets(name);
	printf("Enter age : ");
	scanf("%d",&age);
	printf("Enter gender(M/F) : ");
	fflush(stdin);
	scanf("%c",&gender);
	
	
	for(i=1;i<=age;i++){
		if(age>1 && age <=19){
			printf("Chao em");
		}else if(age>19 && age<=25){
			printf("Chao ban");
		}else if(age>25 && age<=40){
			if(gender=='M')
			printf("Em chao anh");
		}else if(gender=='F'){
			printf("Em chao chi");
		}else
			printf("Chau chao bac");
	}
	
	return 0;
}
