#include <stdio.h>
//include header file here
#include "header.h"
int main(){
	
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	addBitwise(num1,num2);
	
	unsigned char ch;
	int low,high;

	printf("Enter unsigned chr:");
	scanf("%hhu",&ch);
	printf("Enter low:");
	scanf("%d",&low);
	printf("Enter high:");
	scanf("%d",&high);

	if(isBitSetInRange(ch,low,high))
		printf("Bit Set is in range\n");
	else
		printf("Bit Set is not in range\n");


	printf("Enter number:");
	scanf("%d",&num1);

	toBinary(num1);

	printf("Enter number:");
	scanf("%d",&num1);
	
	toOctal(num1);

	return 0;
}
