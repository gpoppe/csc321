//Garrett Poppe


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double areaCircle(int rad);

int main(void)
{
	int radius;
	double result;

	printf("Enter the radius of your circle: ");
	scanf("%d",&radius);
	
	result = areaCircle(radius);

	printf("The area of your circle is: %lf \n",result);
	
	printf("3 to the 4 power is %lf \n",pow(3,4));

	return EXIT_SUCCESS;
}

double areaCircle(int rad)
{
	double x = rad * rad * 3.14;
	return x;
}
