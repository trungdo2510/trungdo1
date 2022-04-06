#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sv;
	float marks[100];
	int i;
	
	printf("Nhap so sv %d : \n",sv);
	scanf("%d",&sv);
	printf("Nhap diem cua sv so %d : \n",i);
	scanf("%f",&marks[i]);
	
	for(i=0;i<sv;i++){
//		printf("Diem sinh vien so %d : \n",i);
//		scanf("%f",&marks[i]);
		}if(i>=40)
			printf("Done\n");
		else if(i>70 && i<=79)
			printf("Duoc hoc bong 70%\n");
		else if(i>80)
			printf("Duoc hoc bong 80%\n");
		else
			printf("Fail\n");
	return 0;
}
