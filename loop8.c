#include<stdio.h>

main()
{
	int i = 1,n;
	printf("Enter The Number =");
	scanf("%d",&n);
	printf("table \n");
	while(i<=10)
	{
		printf("%d * %d = %d \n",n,i,n*i);
		i++;
	}
	
}
