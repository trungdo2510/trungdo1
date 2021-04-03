#include <stdio.h>
int main(void)
{
	float r,CV,S;
	
	printf ("nhap ban kinh r\n", r);
	scanf ("%f", &r);
	
	CV = 2*3.14*r ;
	printf ("CV is %f*2*3.14 = %f\n",r,CV);
	
	S = r*r*3.14;
	printf ("S is %f*%f*3.14 = %f",r,S);
	
	return 0;
}
