#include<stdio.h>

main()
{
	int i = 1,n;
	printf("Enter The Number =");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2 !=0)
		{
			printf("%d \n",i);
		}
		i++;
	}
}
