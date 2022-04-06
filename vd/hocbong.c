#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sv;
	float marks[100];
	int i;
	
	printf("Nhap so sv : \n",sv);
	scanf("%d",&sv);
	
	for(i=0;i<sv;i++){
		printf("Diem sinh vien so %d : \n",i);
		scanf("%f",&marks[i]);
		if(i<40){
			printf("Fail\n");
		if(i>=40)
			printf("Done\n");
		if(i>70 && i<=79)
			printf("Duoc hoc bong 70%\n");
		if(i>80)
			printf("Duoc hoc bong 80%\n");
		}
	}
	return 0;
}
