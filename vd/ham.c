#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int add(int x, int y)
	{
		int c;
		c = x + y;
		return c;
	}
	
	int main(){
	int x,y;
		int sum = add(x,y);
//		printf("Nhap x : %d",x);
		scanf("%d",&x);
//		printf("Nhap y : %d",y);
		scanf("%d",&y);
		printf("sum = %d",sum);
		return 0;
	}
