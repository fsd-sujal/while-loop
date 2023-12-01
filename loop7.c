#include<stdio.h>

main()
{
	int i = 1,n,sum = 0;
	printf("Enter The Number =");
	scanf("%d",&n);
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("sum is 1 to n   = %d",sum);
}
