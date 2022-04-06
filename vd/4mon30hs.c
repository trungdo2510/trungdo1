#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tong[30],mon[4][30];
	int i,j;
	
	printf("Nhap diem 30 sinh vien\n");
	printf("\nMon/sv: ");
	for(i=0;i<4;i++){
		printf("%d Mon:",i+1);
		for(j=0;j<30;j++){
			scanf("%d",&mon[i][j]);
			tong[i]=tong[i]+mon[i][j];
		}
	}
	
	for(j=0;j<30;j++){
		tong[j]=0;
		for(i=0;i<4;i++){
			tong[j]=tong[i]+mon[i][j];
		}
	}
	
	for(i=0;i<30;i++){
		printf("\nSinh vien thu %d dat diem trung binh la %.1f",i+1,tong[i]/4.0);
	}
	return 0;
}
