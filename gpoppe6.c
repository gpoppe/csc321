//Garrett Poppe
//
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, x = 3,y = 6, total = 0;
	double z = 3, n = 6, total1 = 0;
	total = x+y*x/y-x;
	printf("First eval = %d \n",total);
	 total = -x-y/x*y+x;
        printf("Second eval = %d \n",total);
	 total = x+y-x/y;
        printf("Third eval = %d \n",total);

	total1 = z+n*z/n-z;
        printf("First eval = %lf \n",total1);
         total1 = -z-n/z*n+z;
        printf("Second eval = %lf \n",total1);
         total1 = z+n-z/n;
        printf("Third eval = %lf \n",total1);

	return EXIT_SUCCESS;
}
