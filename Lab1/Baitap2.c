#include <stdio.h>
int main(void)
{
	int a;
	float b;
	
	printf("nhap so tien usd a\n",a);
	scanf("%d",&a);
	
	b = a*16.689 ;
	
	printf("b is %d * 16.689 = %.3f\n",a,b);
	return 0;
}
