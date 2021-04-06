#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap do C = ");
	scanf("%d",&a);
	
	b = 9*a/5 + 32 ;
	printf("So do F la : %d", 9*a/5 + 32);
	return 0;
}
