#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[150];
	int i=0;
	int count=0, leghth;
	
	printf("Nhap ten cua ban :");
	gets(name);
	leghth = strlen(name);
	for(i=0; i<leghth; i++)
	{
		printf("%c*",name[i]);
		switch (name[i])
		{
			case 'a':
			case 'e':
			case 'u':
			case 'o':
			case 'i':
			case 'A':
			case 'E':
			case 'U':
			case 'O':
			case 'I':
			count++;
			break;
		}
	}
	printf("\nSo nguyen am trong ten la : %d",count);
	return 0;
}
