#include<stdio.h>

main()
{
	int i = 1,n;
	printf("Enter The Number =");
	scanf("%d",&n);
	while(n>=i)
	{
		if(n%2==0)
		{
			printf("%d \n",n);
		}
		n--;
	}
}
