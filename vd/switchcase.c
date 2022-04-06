#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf("Nhap vao mot ky tu (A-Z hoac a-z) : ");
	scanf("%c",&ch);
	switch(ch){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'U':
		case 'u':
		case 'O':
		case 'o':
		case 'I':
		case 'i':
		printf("Chu cai nhap vao la nguyen am",ch);
		break;
		default:
			printf("Chu cai nhap vao la phu am",ch);
	}
	return 0;
}
