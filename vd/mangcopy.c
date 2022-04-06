#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i;
	printf("Nhap 5 so : \n");
	for(i=0;i<5;i++){
		printf("So thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	int copy[5];
	for(i=0;i<5;i++){
		copy[4-i]=arr[i];
	}
	printf("Mang chua dao\t\tMang dao nguoc\t\tMang copy\n");
	for(i=0;i<5;i++){
		printf("\t%d\t\t\t%d\t\t\t%d\n",arr[i],arr[4-i],copy[4-i]);
	}
	return 0;
}
