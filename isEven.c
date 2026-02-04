#include <stdio.h>
#include "isEven.h"
int isEven(int num)
{
	if (num % 2 == 0){
		 printf("%d is even.\n", num);
	}
	return 0;
}
int isOdd(int num)
{
	if (num % 2 != 0){
		 printf("%d is odd.\n", num);
	}
	return 0;
}
