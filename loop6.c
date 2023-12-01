#include<stdio.h>

main()
{
	int i = 2000;

	printf("This is Leap year List \n\n");

	while(i<= 3000)
	{
		if(i%4==0)
		{
			printf("%d \n",i);
		}
		i++;
	}
}
