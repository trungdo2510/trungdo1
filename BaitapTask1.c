#include <stdio.h>
int main (void)
{
	int a,b,c;
	int Tong, TB;
	
	printf ("nhap diem toan\n");
	scanf("%d",&a);
	
	printf ("nhap diem ly\n");
	scanf("%d", &b);
	
	printf ("nhap diem hoa\n");
	scanf("%d", &c);
	
	Tong = a + b + c ; 
	printf("Tong ba mon la %d",a,b,c);
	
	TB = (a+b+c)/3;
	printf ("TB 3 mon la %d",a,b,c);
	
	return 0;
}
