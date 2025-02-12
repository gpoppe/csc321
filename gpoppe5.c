//Garrett Poppe
//
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, x = 0;
	int arr[10] = {7};

	printf("the value of x is %d and it's address is %p \n",x,&x);

	/*scope statement
	{
		int y = 10;
	}
	printf("the value of y is %d \n",y);
	*/

	for(i = 0; i < 10;i++)
	{
		printf("addresss of arr[%d] = %p \n",arr[i],&arr[i]);
	}

	return EXIT_SUCCESS;
}
