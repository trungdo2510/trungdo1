#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int d,e;
	printf("Nhap diem toan = ");
	scanf("%d",&a);
	printf("Nhap diem ly = ");
	scanf("%d",&b);
	printf("Nhap diem hoa = ");
	scanf("%d",&c);
	
	d = a + b + c ; 
	printf("Tong diem ba mon la : %d\n", a+b+c);
	
	e = d/3;
	printf("Trung binh ba mon la : %d\n",d/3);
	return 0;
}
