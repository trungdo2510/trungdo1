#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int i;
	int total = 0;
	int max ;
	int min ;
	for(i=0;i<10;i++){
		printf("Nhap phan tu %d : \n", i+1);
		scanf("%d",&arr[i]);
		if(i==0){
			min = arr[0];
			max = arr[0];
		}
		if(max < arr[i]) max = arr[i];
		if(min > arr[i]) min = arr[i];
		total += arr[i];
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	printf("total = %d\n", total);
	printf("arg = %d\n", total/10);
	return 0;
}
