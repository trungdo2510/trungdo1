#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("/*======== Kich thuoc cua cac kieu du lieu =========*/\n");
	printf("       Kieu int : %d byte\n", sizeof(int));
	printf("       So nguyen : 15\n\n");
	printf("       Kieu float : %d byte\n", sizeof(float));
	printf("       So thuc kieu float : 3.456000\n\n");
	printf("       Kieu char : %d byte\n", sizeof(char));
	printf("       Ky tu : E\n\n ");
	printf("      Kieu long int : %d byte\n\n", sizeof(long int));
	printf("       Kieu long double : %d byte \n\n", sizeof(long double));
	printf("/*==================================================*/");
	
	return 0;
}
