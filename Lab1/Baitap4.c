#include <stdio.h>

int main(void) {
	
	float s,a,h;	
	
	
	printf 	("Nhap chieu cao high (cm): ");
	scanf 	("%f", &h);
	
	printf 	("Nhap canh day bottom (cm): ");
	scanf	("%f", &a);
	
	s=a*h/2;
	
	printf ("Dien tich tam giac la: %f cm2\n", s);
		
	return 0;
}
