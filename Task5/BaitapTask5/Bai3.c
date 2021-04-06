#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int num;
//	printf("Nhap so num = ");
//	scanf("%d", &num);
//	printf("Binh phuong cua so do la: %d", num*num);
	
	int num1;
	int num2;
	int a,b;
	float c;
	
	printf("Nhap so num1 = ");
	scanf("%d", &num1);
	printf("Nhap so num2 = ");
	scanf("%d", &num2);
	
	a = num1 + num2 ;
	printf("Tong la : %d\n",num1 + num2);
	
	b = num1 - num2 ;
	printf("Hieu la : %d\n", num1 - num2);
	
	c = num1/num2 ;
	printf("Thuong la : %.2f\n", c);
	
	return 0;
}
