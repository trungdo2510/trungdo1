	#include <stdio.h>
int main (void)
{
	int a;
	printf("nhap so a\n");
	scanf("%d", &a);
	
	if(a==0)
	{
		printf("%d=0\n",a);
	}else
	
	if(a>0)
	{
		printf("%d la so duong", a);
	}else
	
	if (a<0)
	{
		printf("%d la so am",a);
	}else
	
	return 0;
	
}
