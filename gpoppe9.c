//Garrett Popppe

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int guess = 0, i,x=3 ,y;

	srand(time(NULL));
	
	y = 10 +(rand() %91);

	while(guess < 10 || guess > 100)
	{
		printf("Enter a number between 1 and 100 \n");
		scanf("%d",&guess);
		if(guess < 1 || guess > 100)
		{
			puts("number out range");
		}
	}

	for(i = 0; i < x;i++)
	{
		printf("this is a for loop. this is y= %d \n",y);
	}

	
	return EXIT_SUCCESS;
}



