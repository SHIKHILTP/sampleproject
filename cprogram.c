#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3,average;
	setbuf(stdout,NULL);
	printf("enter 3 numbers\n");
	scanf("%d%d%d" ,&num1,&num2,&num3);
	average=(num1+num2+num3)/3;
	printf("avg is = %d",average);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}