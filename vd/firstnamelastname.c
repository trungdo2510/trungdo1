#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char firstname[15];
	char lastname[15];
	
	printf("Enter your firstname:");
	scanf("%s",firstname);
	printf("Enter your lastname:");
	scanf("%s",lastname);
	strcat(firstname,lastname);
	printf("%s",firstname);
	return 0;
}
