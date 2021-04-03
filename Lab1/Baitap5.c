#include <stdio.h>
int main (void)
{
	float h;
	float s;
	float v;
	float r;
	float pi;
	
	printf("nhap chieu cao h\n");
	scanf("%f",&h);
	printf("nhap duong kinh r\n");
	scanf("%f",&r);
	
	v=3.14*r*r*h;
	
	printf("the tich hinh tru la : %f",v);
	
	return 0;
}
