#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r,a,b,c;
	float CVHT,SHT,CVHV,SHV,CVHCN,SHCN;
	
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	
	CVHT = 2*3.14*r;
	scanf("Chu vi hinh tron : %f",CVHT);
	SHT = 3.14*r*r;
	scanf("Dien tich hinh tron : %f",SHT);
	
//	printf("Nhap canh hinh vuong a = ");
//	scanf("%f",&a);
//	CVHV = a*4;
//	scanf("Chu vi hinh vuong : %f",CVHV);
//	SHV = a*a;
//	scanf("Dien tich hinh vuong : %f",SHV);
	
//	printf("Nhap chieu dai hinh chu nhat b = ");
//	scanf("%f",&b);
//	printf("Nhap chieu rong hinh chu nhat c = ");
//	scanf("%f",&c);
//	CVHCN = a*(b+c);
//	SHCN = b*c;
//	scanf("Dien tich hinh chu nhat : %f",SHCN);
	
	return 0;
}
