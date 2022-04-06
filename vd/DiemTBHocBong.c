#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int english, egmat;
	int TB;
	
	printf("Nhap diem english : ");
	scanf("%d",&english);
	printf("Nhap diem egmat : ");
	scanf("%d",&egmat);
	
	TB = (english + egmat)/2;
	printf("Diem TB = %d\n",TB);
	
	if(TB>=40 && TB<80)
		printf("Qua mon");
	else if(TB>=80 && TB<=90)
		printf("Dat hoc bong 500$");
	else if(TB>90)
		printf("Dat hoc bong 1000$");
	else
		printf("Truot mon");
	
	return 0;
}
