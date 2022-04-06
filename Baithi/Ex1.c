#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("\nEnter number: ");
	scanf("%d",&n);
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Total digits: %d\n", sum);
	
	return 0;
}
