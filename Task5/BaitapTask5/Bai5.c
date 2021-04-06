#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,h;
	int c;
	printf("Nhap day lon bottom = ");
	scanf("%d", &a);
	printf("Nhap day be top = ");
	scanf("%d", &b);
	printf("Nhap chieu cao high =");
	scanf("%d", &h);
	
	c = h*(a+b)/2;
	printf("Dien tich hinh thang la : %d",h*(a+b)/2);
	return 0;
}
