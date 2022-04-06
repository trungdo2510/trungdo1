#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int B = 50000;
	
	printf("Nhap so tien can rut :\n");
	scanf("%d",&a);
	
	b = a%50;
	if(a<=B){
		printf("So tien rut la:%d\n",a);
		printf("So du trong tai khoan la:%d\n",B-a);
	}else
	

		printf("So tien rut khong hop le");
	
	return 0;
}
