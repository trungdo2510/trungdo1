#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alpha[26];
	int i,j;
	for(i=97,j=0;j<26;i++,j++){
		alpha[j]=i;
		printf("The character %c is %d\n",alpha[j],alpha[j]);
	}
	return 0;
}
